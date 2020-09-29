#include <stdio.h>


  int main() {

   float gC, gF;
printf("Digite o valor em graus centigrados: ");
scanf("%f", &gC);
gF = (9 * gC + 160) / 5;
printf("Temperatura em fahrenheit: %f", gF);
}
