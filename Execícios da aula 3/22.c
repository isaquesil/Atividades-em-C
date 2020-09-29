#include <stdio.h>


int main(){ 


float carteira, valor, total=0, divida;

int multas, i, maiorNmultas=0, maiorCarteira;


do {

divida = 0;

i = 1;

printf("\nDigite o numero da carteira de motorista: ");
scanf("%f", &carteira);

if (carteira == 0)

break;


if (carteira > 4327)

break;

printf("\nDigite o numero de multas: ");
scanf("%d", &multas);

if (multas > maiorNmultas) {

maiorNmultas = multas;
maiorCarteira = carteira;
}
while(i <= multas) {
printf("\nDigite o valor da multa %d: ", i);
scanf("%f", &valor);
total += valor;
divida += valor;
i++;
}
printf("\nDivida do motorista: %f", divida);
} while(carteira != 0);

printf("\nTotal arrecadado pelo DETRAN: %f", total);
printf("\nCarteiro com maior numero de multas: %d", maiorCarteira);

}
