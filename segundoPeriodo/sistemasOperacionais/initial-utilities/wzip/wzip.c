#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
//file compresion program

void writeFile(int count, char buffer){
fwrite(&count, 4, 1, stdout);
fwrite(&buffer, 1,1,stdout);
}


int main(int argc, char *argv[]){
  FILE *fp;
  char buffer1, buffer2;
  int count=1;
  if(argc < 2){
    return 1;
  }
  else{
    fp = fopen(argv[1], "r");
    fread(&buffer2, 1, 1,fp);
    while(fread(&buffer1, 1 , 1,fp)){
      if(buffer1 == buffer2){
        count++;
      }
      else{
        writeFile(count, buffer2);
        count = 1;
        buffer2 = buffer1;
      }
    }
    if(count > 1){
      writeFile(count, buffer2);
    }
  }
  
  fclose(fp);
  return 0;
}
