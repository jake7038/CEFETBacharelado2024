#include <stdio.h>

int quadrado(int n){
    for(int i = 0 ; i <= n; i++){
        if(i * i == n){
            return 1;
            
        }
    }
    return 0;
}


int main(){
    printf("%d\n", quadrado(4));
    printf("%d\n", quadrado(9));
    printf("%d\n", quadrado(10));
    return 0;

}