#include <stdio.h>
//this code simulate the cat command line
int main(int argc, char *argv[]){
    char line[1000];
    FILE *file;
    for(int i = 0; i < argc-1; i++){
      file = fopen(argv[i+1],"r");
      if(file == NULL){ 
        printf("wcat: cannot open file\n");
        return 1;
    }else{
       while(fgets(line, 1000, file ) != NULL){
        printf("%s", line);
    }
    fclose(file);
    }
    }
    return 0;
}
