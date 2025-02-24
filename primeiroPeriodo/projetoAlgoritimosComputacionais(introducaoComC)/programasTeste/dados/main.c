//esse programa simula o lançamento de dois dados de 6 lados

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(){
srand(time(NULL));
printf("O primeiro dado deu %d\n", 1 + ( rand() % 6) );
printf("O segundo dado deu %d\n", 1 + ( rand() % 6) );

  return 0;
}

