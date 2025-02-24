#include <stdio.h>

    int processaValor(float val, float base){
        if(val <= base * 1.5){
        printf("Normal\n");
        return 1;
        }       
        if(val > base * 1.5 && val <= base * 2){
        printf("suspeita\n");
        return 1;
        }        
        
        if(val >= base * 1.5){
            printf("bloqueada\n");
            return 0;
        }        
        
    }


int main(){
    float valor, base;
    int temp=1;
    scanf("%f", &valor);
    quadrado(2);
    base = valor;
    processaValor(valor, base);
    while(temp != 0){
        scanf("%f", &valor);
        temp = processaValor(valor,base);

    }
    return 0;

}
