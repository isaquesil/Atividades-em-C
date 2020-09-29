#include <stdio.h>

  int main() {
 

   int salario;

   printf("Digite o salario: ");
 scanf("%d",&salario);

  
  if (salario <= 600)
printf("Isento de INSS");
  
  else if (salario <= 1200)
printf("20%: %.2f", salario * 0.2);

  else if (salario <= 2000)
printf("25%: %.2f", salario * 0.25);

    else
printf("30%: %.2f", salario * 0.3);

}
