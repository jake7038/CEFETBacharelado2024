#include <stdio.h>
#include <math.h>

    float leitura(float valor){
        printf("bem vindo a loja!\n insira o valor da sua compra: ");
        scanf("%f",&valor);
        return valor;
    }

void desconto(float valor){
    if(valor >= 600){
        valor = valor * 0.80;
        printf("O valor total é de %0.2f",valor);
    }else if(valor >= 400){
        valor = valor * 0.85;
        printf("O valor total é de %0.2f",valor);
    }else if(valor >=200){
        valor = valor * 0.90;
        printf("O valor total é de %0.2f",valor);
    }
    
    else{
        printf("O valor total é de %0.2f",valor);
    }

}


int main(){
    float valor;
    valor = leitura(valor);

    desconto(valor);

    return 0;
}