#include <stdio.h>
#include <string.h>
//this code simulates the grep command line

int main(int argc, char *argv[]){
  FILE *file;
  char line[500];
  if(argc == 1){
  printf("wgrep: searchterm [file ...]\n");
  return 1;
  }
  if(argc == 2){
    while (fgets(line, 500, stdin) != NULL) {
      if (strstr(line, argv[1]) != NULL) {
        printf("%s", line);
        }
    }
  }else{
    for(int i = 2; i < argc ; i++){
     file = fopen(argv[i], "r");
     if(file == NULL){
      printf("wgrep: cannot open file\n");
      return 1;
     }
     
  while (fgets(line, 500, file) != NULL) {
      if (strstr(line, argv[1]) != NULL) {
        printf("%s", line);
        }
    }
    fclose(file);
  }
  }
    return 0;
}
