
#include <stdio.h>
#include <stdlib.h>


int main()
{

float renda, imposto=0, total=0;
int cic, dependentes;

do {

printf("\nDigite o CIC: ");
scanf("%d", &cic);

if (cic == 0)

break;

printf("\nDigite o numero de dependentes: ");
scanf("%d", &dependentes);

printf("\nDigite a renda: ");


scanf("%f", &renda);
 
renda -= dependentes * 600;

if (renda < 1000) {
printf("\nIsento de imposto");
}

else if (renda < 5000) {
imposto = renda * 0.15;

}

else {
imposto = renda * 0.25;
}

printf("CIC: %d \n", cic);

printf("Imposto: %f \n", imposto);

total += imposto;
}
 while(cic != 0);



printf("\nTotal arrecadado pela receita federal: %f", total);

}
