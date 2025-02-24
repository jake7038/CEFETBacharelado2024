#include <stdio.h>


int main(){
  char name[11];
  scanf("%s", name);
  printf("olá %s\n", name);
  for(int i = 0; name[i] != '\0'; i++){
  printf("%c", name[i]);
  }
  
  
  return 0;
}
