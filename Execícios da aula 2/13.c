#include <stdio.h>


 int main()
{

  int sal;
  printf("Digite o saldo: ");
  scanf("%d",&sal);

 if (saldo <= 500)
printf("Nenhum credito");

 else if (sal <= 1000)
printf("Saldo: %d - Credito: %f", sal, sal * 0.3);

 else if (saldo <= 3000)
printf("Saldo: %d - Credito: %f", sal, sal * 0.4);

  else
printf("Saldo: %d - Credito: %f", sal, sal * 0.5);
}
