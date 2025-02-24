#include <stdio.h>

int main() {
int conta;
char nome[30];
float saldo;
FILE *cfPtr;
/* cfPtr = ponteiro do arquivo clientes.dat */
if ((cfPtr = fopen("clientes.dat", "a")) == NULL)
printf("Arquivo nao pode ser aberto\n");
else {
printf("Digite a conta, o nome e o saldo.\n");
printf("Digite EOF para encerrar a entrada de dados.\n");
printf("? ");
scanf("%d%s%f", &conta, nome, &saldo);

while (!feof(stdin)) {
fprintf(cfPtr, "%d %s %.2f\n",conta, nome, saldo);
printf("? ");
scanf("%d%s%f", &conta, nome, &saldo);
}
fclose(cfPtr);
}
return 0;
}
