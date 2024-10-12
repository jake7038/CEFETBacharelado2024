#include <stdio.h>
#include <math.h>

//função que lê os coeficientes
float leCoeficiente(float array[3]){

    for(int i = 0; i < 3; i++){
        printf("Informe o %i coeficiente: ",i+1);
        scanf("%f",&array[i]);
    }
    

    return array[3];

}
//retorna com as raizes
void raizes(double delta, float array[3]){
    float res;
    if(delta == 0){
        res = - array[1] / 2*array[0];
        printf("a raiz é unica com valor %f\n",res);
    }
    if(delta > 0){
        float res2;
        res = ((-array[1] + sqrt(delta)) / (2*array[0]));
        res2 = ((-array[1] - sqrt(delta)) / (2*array[0]));
        printf("raizes %f e %f\n",res, res2);
    }
    if(delta < 0){
        printf("delta negativo. As raizes não reais.\n");
    }

}


int main(){
    float coeficientes [3];
    double delta = 0;
    printf("Bem vindo!\npara calcular a raiz por favor informe:\n ");
    
    leCoeficiente(coeficientes);

    delta = coeficientes[1] * coeficientes[1] - (4*coeficientes[0] * coeficientes[2]);

    raizes(delta,coeficientes);
    
    return 0;
}