#include <stdio.h>



  int main()
{

float velocidade, distancia, tempo, consumo;
float total=0;


do {

printf("\nDigite a velocidade: ");
scanf("%f", &velocidade);

if (velocidade < 0)

break;

printf("\nDigite o tempo: ");
scanf("%f", &tempo);
distancia = velocidade * tempo;
consumo = distancia / 10;
total += consumo;
printf("\nDistancia percorrida: %f ", distancia);
printf("\nTotal gasto no trecho: %f ", consumo);
}

 while(velocidade >= 0);
 printf("\nTotal de litros consumidos: %f ", total);

}
