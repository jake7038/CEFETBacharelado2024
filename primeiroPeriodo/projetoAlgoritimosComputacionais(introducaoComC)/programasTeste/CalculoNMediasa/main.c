#include <stdio.h>

#include <limits.h>

int main(){
    int nums, i=0;
    float res=0;
    printf("defina o número de variaveis\n");
    scanf("%d",&nums);
    float x[nums]; 
    while(i < nums){
    printf("digite o número %d°\n",i+1);
        scanf("%f",&x[i]);
        i++;
    }
    i=0;
    while(i < nums){
        res += x[i];
        i++;
    }
    res /= nums;
    printf("media igual a %0.2f\n", res);
    printf("",)
    return 0;

}