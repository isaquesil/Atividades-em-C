#include <stdio.h>


  int main() {
  int i, codigo[3], quantidade[3], resposta;
 float vlrcompra[3], vlrvenda[3];

  for (i=0; i<3; i++) {

  printf("\nDigite o codigo do produto:\n");
scanf("%d", &codigo[i]);

   printf("\nDigite a quantidade do produto:\n");
scanf("%d", &quantidade[i]);

   printf("\nDigite o valor de compra do produto:\n");
scanf("%f", &vlrcompra[i]);

  printf("\nDigite o valor de venda do produto:\n");
scanf("%f", &vlrvenda[i]);
}

printf("\n1 - listar todos os produtos\n");
 
  printf("\n2 - listar produto por codigo\n");
scanf("%d", &resposta);

if (resposta == 1) {
  printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");

for (i=0; i<3; i++) {

printf("%d \t",codigo[i]);
printf("%d \t\t",quantidade[i]);
printf("%f \t",vlrcompra[i]);
printf("%f \n",vlrvenda[i]);
}
}

else if (resposta == 2) {

printf("\nDigite o codigo do produto:\n");
scanf("%d", &resposta);
printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");

for (i=0; i<3; i++) {
if (codigo[i] == resposta) {
printf("%d \t",codigo[i]);
printf("%d \t\t",quantidade[i]);
printf("%f \t",vlrcompra[i]);
printf("%f \n",vlrvenda[i]);
break;
}
}
}
else
printf("Opcao invalida! \n");

}
