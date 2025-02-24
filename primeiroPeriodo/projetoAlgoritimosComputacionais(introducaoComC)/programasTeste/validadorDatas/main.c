#include <stdio.h>
#include <math.h>

int bissexto(int ano){

return ((ano % 4 == 0) && (ano % 100 != 0) || ano % 400 == 0); //se for bissexto ele retorna verdadeiro


}

int dataValida(int dia, int mes, int ano){
    int ndia;
    if((mes >= 1 && mes <=12) && ano != 0){

        if(bissexto(ano)){
            if(mes == 2){
                ndia = 29;
            }else{
                if(mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
            ndia = 30;
            }else{
                ndia = 31;
            }
            }
            
        }else{
            if(mes == 2){
                ndia = 28;
            }else{
                if(mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
            ndia = 30;
            }else{
                ndia = 31;
            }
            }
        }
        return dia <= ndia && dia >= 1;

    }else{
        return 0;
    }

}

int main(){

    printf("data 28/2/2024 %d\n", dataValida(29,2,2024));
    return 0;
}