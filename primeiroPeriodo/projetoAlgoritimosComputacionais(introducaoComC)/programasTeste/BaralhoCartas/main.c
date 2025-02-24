#include <stdio.h>
#include <time.h>
#include <stdlib.h>
    //PROGRAMA QUE SORTEA 2 CARTAS
    //nesse programa valete, dama, rei e ás são respectivamente 11, 12, 13 e 14

    typedef struct 
    {   char *naipe;       
        int numero;
    } carta;
    


int main() {
    carta baralho[52];
    srand(time(NULL));

    for (int i = 0; i < 13; i++)
    {
        baralho[i].naipe = "copas";
        baralho[i].numero = i+2;
    }
    
    for (int i = 13; i < 26; i++)
    {
        baralho[i].naipe = "paus";
        baralho[i].numero = (i-13)+2;
    }
    for (int i = 26; i < 39; i++)
    {
        baralho[i].naipe = "ouros";
        baralho[i].numero = (i-26)+2;
    }
    for (int i = 39; i < 52; i++)
    {
        baralho[i].naipe = "espadas";
        baralho[i].numero = (i-39)+2;
    }

    printf("voce tirou %d de %s\n",baralho[1+ (rand() %52)].numero, baralho[1+ (rand() % 52)].naipe);
    printf("voce tirou %d de %s\n",baralho[1+ (rand() %52)].numero, baralho[1+ (rand() % 52)].naipe);
    return 0;
}