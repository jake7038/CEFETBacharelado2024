/* Programa para imprimir histograma */
#include <stdio.h>
#define TAMANHO 10
int main() {
int n[TAMANHO] = {19,3,15,7,11,9,13,5,17,1};
int i, j;
printf("%5s%15s%17s\n", "Elemento", "Valor", "Histograma");
for (i = 0; i <= TAMANHO - 1; i++) {
printf("%8d%13d ", i, n[i]);
for (j = 1; j <= n[i]; j++)
printf("%c", '*');
/* imprime uma barra */
printf("\n");
}
return 0;
}