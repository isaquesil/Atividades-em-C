#include <stdio.h>
#include <stdlib.h>

void main()
{
int saldo;
printf("Digite o saldo: ");
scanf("%d",&saldo);
if (saldo <= 500)
printf("Nenhum credito");
else if (saldo <= 1000)
printf("Saldo: %d - Credito: %f", saldo, saldo * 0.3);
else if (saldo <= 3000)
printf("Saldo: %d - Credito: %f", saldo, saldo * 0.4);
else
printf("Saldo: %d - Credito: %f", saldo, saldo * 0.5);
}
