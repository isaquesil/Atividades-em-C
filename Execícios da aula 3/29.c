#include <stdio.h>


  int main()

{

float valor, limpeza=0, alimentacao=0, higiene=0, total=0;

char codigo;


do {
  printf("\nDigite a valor: ");
scanf("%f", &valor);


if (valor == 0)
break;
   printf("\nDigite o codigo: ");
fflush(stdin);
scanf("%c", &codigo);

   if (codigo == 'l' || codigo == 'L')

limpeza += valor;
  

  else if (codigo == 'a' || codigo == 'A')
alimentacao += valor;

  else
  higiene += valor;
 total += valor;
}

 while(valor > 0);

 printf("\nTotal: %f",total);
 printf("\nTotal de itens de limpeza: %f ",limpeza);
 printf("\nTotal de itens de alimentacao: %f ",alimentacao);
  printf("\nTotal de itens de higiene: %f ",higiene); 

}
