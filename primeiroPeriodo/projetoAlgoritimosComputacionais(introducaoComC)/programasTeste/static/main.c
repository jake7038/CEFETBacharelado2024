#include <stdio.h>


int valor(){
  int static x=0;
  x++;
  
  return x;
}

int main(){
  printf("em %d %d %d acabou...\n",valor(),valor(),valor());
  return 0;
}




