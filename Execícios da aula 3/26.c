#include <stdio.h>

int main()
{

  int opcao, cont=0;
  float canal4=0, canal5=0, canal7=0, canal12=0;
  float percC4, percC5, percC7, percC12;

do {
printf("\nMENU");
printf("\n1 - Canal 4");
printf("\n2 - Canal 5");

printf("\n3 - Canal 7");
printf("\n4 - Canal 12");

printf("\nDigite a opcao: ");
scanf("%d", &opcao);

if (opcao == 0)

break;
cont++;

switch (opcao) {

case 1:
canal4++;

break;

case 2:
canal5++;

break;

case 3:
canal7++;

break;

case 4:
canal12++;

break;


default:

printf("Canal invalido!\n");
}
}

 while(opcao != 0);



if (cont == 0)
cont = 1;

percC4 = (canal4 / cont) * 100;
percC5 = (canal5 / cont) * 100;
percC7 = (canal7 / cont) * 100;
percC12 = (canal12 / cont) * 100;

printf("\nTotal de pessoas intrevistadas: %d", cont);
printf("\nPerc de pessoas que assistiam ao canal 4: %f", percC4);
printf("\nPerc de pessoas que assistiam ao canal 5: %f", percC5);
printf("\nPerc de pessoas que assistiam ao canal 7: %f", percC7);
printf("\nPerc de pessoas que assistiam ao canal 12: %f", percC12);

}
