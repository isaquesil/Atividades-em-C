#include <stdio.h>
 

  int main()
  {

  int i, dividendo, divisor, subtracao;

  printf("Digite o dividendo: ");
scanf("%d", &dividendo);
  
 printf("Digite o divisor: ");
 scanf("%d", &divisor);
 if (dividendo < 0)
printf("Dividendo invalido \n");

else if (divisor < 0)
printf("Divisor invalido \n");

else if (dividendo < divisor)
printf("Dividendo deve ser maior que o divisor \n");

else {
subtracao = dividendo;

while (subtracao >= divisor) {
subtracao -= divisor;
}
printf("Resto da divisao: %d \n", subtracao);
}

}
