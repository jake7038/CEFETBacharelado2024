#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX 1000
char *paths[100]={"/bin/","/usr/bin/"};
int nOfPathes =2;

int verifcommand(char *command, char *args[]) {
    if (strcmp (command, "cd") == 0) {
        if (args[1] == NULL || args[2] != NULL) {
            fprintf(stderr, "An error has occurred\n");
            return 1; // Indica falha
        }
        else if (chdir(args[1]) != 0) {
            fprintf(stderr, "An error has occurred\n");
            return 1; // Indica falha
        }
        return 0; // Indica sucesso
    } else if(strcmp (command, "exit") == 0){
        if(args[1] !=NULL){
            fprintf(stderr, "An error has occurred\n");
            return 1;
        }else{
            return 0;
        }
    } else if (strcmp (command, "path") == 0) {
        nOfPathes = 0;
        for (int i = 1 ; args[i] != NULL ; i++) {
            paths[nOfPathes] = args[i];
            nOfPathes++;
        }
        return 1;
    }
    else{
        execvp(command, args);
        fprintf(stderr, "An error has occurred\n");
        return 1;
    }
}


int main(int argc, char *argv[]){
    char *cm = NULL;
    size_t len = 0 ;
    int status;
    FILE *input_stream = stdin;

    if (argc > 1)  {
        input_stream = fopen(argv[1], "r");
        if (input_stream == NULL) {
            perror("Erro ao abrir o arquivo");
            return 1;
        }
    }

    do{
        if (input_stream == stdin) {
            printf("wish> ");
            if (getline(&cm,&len,stdin) == -1) {
                break; //usando break porque to com preguiça de fazer um blocão de else
            }
            cm[strcspn(cm, "\n")] = '\0';
            if(strcmp(cm,"exit")){
                char *args[MAX];
                int arg_count = 0;
                char *token = strtok(cm, " ");
                char *command = NULL;
                if (arg_count > 0) command = args[0];

                while (token != NULL && arg_count < MAX - 1) {
                    args[arg_count++] = token;
                    if (arg_count == 1) command = token;
                    token = strtok(NULL, " ");
                }
                args[arg_count] = NULL;
                int rm = fork();
                if(rm == 0){
                    verifcommand(command, args);
                    exit(0);
                }
                    
                
            }
        } else {
            // Modo de leitura de arquivo
            if (getline(&cm,&len,input_stream) == -1) {
                break;
            }
            cm[strcspn(cm, "\n")] = '\0';
            if(strcmp(cm,"exit")){
                char *args[MAX];
                int arg_count = 0;
                char *token = strtok(cm, " ");
                char *command = NULL;

                while (token != NULL && arg_count < MAX - 1) {
                    args[arg_count++] = token;
                    if (arg_count == 1) command = token;
                    token = strtok(NULL, " ");
                }
                args[arg_count] = NULL;

                if (command != NULL && ( strcmp(command, "exit") == 0 || strcmp(command, "cd") == 0 ) ) {
                    if(strcmp(command, "exit") == 0 ){
                        verifcommand(command, args);
                    }else{
                        verifcommand(command, args); // cd é tratado no pai pelo verifcommand
                    }
                    
                } else {
                    int rm = fork();
                    if(rm == 0){
                        verifcommand(command, args);
                        exit(1);
                    }
                }
            }
        }
    } while(strcmp(cm,"exit"));

    if (input_stream != stdin) {
        fclose(input_stream);
    }
    free(cm);
    return 0;
}