#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
//file compresion program

//function that transforms char in binaries
void writeFile(int count, char buffer){
fwrite(&count, 4, 1, stdout);
fwrite(&buffer, 1,1,stdout);
}


int main(int argc, char *argv[]){
  FILE *fp;
  char buffer1, buffer2; /*buffer1 runs from the file and is comparete to buffer2 to see if a char changs*/
  int count=1; /*counter for every time a char is repeated*/
  
  if(argc < 2){ /*if there is just one argument, it means, no file so read*/ 
  printf("wzip: file1 [file2 ...]\n");
    return 1;
  }
  
  else{
  for(int i =1; i < argc; i++){ /*read all files // le todos os arquivos usados como argumentos */
    fp = fopen(argv[i], "r");
    fread(&buffer2, 1, 1,fp); /* make buffer2 iquals to the first char // faz o buffer2 igual ao primeiro char do arquivo */ 
    if(count > 1){  /* in case the char changes when you enter another file // verificação para caso o char mude entre arquivos */
      if(buffer1 != buffer2){
        writeFile(count, buffer1);
      }else{
        count++;
      }
    }
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
      fclose(fp);
    }
    if(buffer1 == '\n'){ /* in case the file ends with a end of line // em caso do arquivo acabar com um pulo de linha */
    writeFile(1, buffer1); 
    }
    if(count > 1){
      writeFile(count, buffer2);
      count = 1;
    }
  
    
  }
  
  
  return 0;
}
