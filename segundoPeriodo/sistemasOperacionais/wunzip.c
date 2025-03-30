#include <stdio.h>
  //this is the unzip program for the wzip
int main(int argc, char *argv[]){
  char buffer1;
  int n;
  FILE *file;
  if(argc < 2){
  printf("wunzip: file1 [file2 ...]\n");
  return 1;
  }
  for(int i = 1; i < argc ; i++){
    file = fopen(argv[i], "r");
    while(fread(&n, 4, 1,file)){ //imprime n vezes o caracter do buffer1
    fread(&buffer1, 1, 1,file);
    for(int i = 0 ; i < n; i++){
      printf("%c", buffer1);
    }
  }
  fclose(file);
  }
  
  return 0;
}
