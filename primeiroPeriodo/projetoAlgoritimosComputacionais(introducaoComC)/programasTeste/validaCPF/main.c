#include <stdio.h>

int main(){
    long int cpf;
    int sum1, d, sum2,i=9;
    
    scanf("%ld",&cpf);
    
    while(i > 0){
        d = cpf % 10;
        sum1 = sum1 + d * (i);
        sum2 = sum2 + d *(i-1);
        cpf = cpf / 10;
        i--;
    }
    sum1 = sum1 % 11;
    if(sum1 == 10){
        sum1 = 0;
    }
    sum2 = sum2 + sum1 * 9;
    sum2 = sum2 % 11;
    if(sum2 == 0){
        sum2 = 0;
    }
    printf("digito final vai ser %02d.\n",(sum1*10 + sum2));

}