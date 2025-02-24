#include <stdio.h>



int main(){
    float litros = 0, km;
    
    printf("Entre com o numero de litros (digite -1 para sair)\n");
    scanf("%f",&litros);
    while( litros >= 0){
        printf("Entre com os km rodados\n");
        scanf("%f",&km);
        printf("A taxa km/litro para esse tanque foi de %0.2f\n", km/litros);
        printf("Entre com o numero de litros (digite -1 para sair)\n");
        scanf("%f",&litros);
    }


    return 0;
}