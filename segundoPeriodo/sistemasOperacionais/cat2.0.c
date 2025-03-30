#include <stdio.h>
//this code simulate de cat command line
int main(int argc, char *argv[]){
    char  line[1000];

    if(argc < 2){
        printf("exemplo de uso do comando wcat: wcat <nome do arquivo>\n");
        return 1;
    }

    FILE *file;
    file = fopen(argv[1],"r+");
    
    if(file == NULL){ 
        file = fopen(argv[1],"w+");
    }
    if(argc > 2){
        fseek(file, 0, SEEK_END); //move o ponteiro para o final do arquivo
        for(int i = 2 ; i < argc ; i++){
            fprintf(file, "%s\n", argv[i]);
        }
    }

    fseek(file, 0, SEEK_SET); //move o ponteiro para o inicio do arquivo

    while(fgets(line, 1000, file ) != NULL){
        printf("%s", line);
    }
    
    fclose(file);
    
    return 0;
}
