#include <stdio.h>



int main()
{
 float saldo;
 printf("Informe o valor do saldo: ");
 scanf("%f",&saldo);
 printf("O saldo corrigido e %4.2f\n\n",saldo * 0.02);

 return 0;
}
