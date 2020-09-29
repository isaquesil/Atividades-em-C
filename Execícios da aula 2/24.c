#include <stdio.h>


 int main() {
 
  int p, m, c, d;

   printf("Digite o numero da placa do carro no formato <9999>: ");
  scanf("%d", &p);
  m = p / 1000;
  p = p - (m * 1000);
  c = p / 100;
   p = p - (c * 100);
 d = p / 10;
 p = p - (d * 10);
  printf("Mes: %d", p);
}
