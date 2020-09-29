#include <stdio.h>


   int main()
{

  int idade, solteiro=0, casado=0, total=0, viuvo=0;
  char codigo;
 float idadeViuvo=0, mediaIdadeV, outros=0, percOutros;


 do {
 printf("\nDigite a idade: ");
scanf("%d", &idade);

  if (idade < 0)
 break;

 total++;

printf("\nC - casado");

printf("\nS - solteiro");
printf("\nV - viuvo");
printf("\nD - separado");
printf("\nDigite o estado civil: ");
fflush(stdin);
  scanf("%c", &codigo);


  if (codigo == 'c' || codigo == 'C')
casado++;

   else if (codigo == 's' || codigo == 'S')
solteiro++;
  
  else if (codigo == 'v' || codigo == 'V') {
 idadeViuvo += idade;
viuvo++;
}
else
outros++;
} while(idade >= 0);
if (total == 0)
total = 1;
mediaIdadeV = idadeViuvo / viuvo;
percOutros = outros / total;
printf("\nQuantidade de casados: %d", casado);
printf("\nQuantidade de solteiros: %d", solteiro);
printf("\nMedia de idade dos viuvos: %f", mediaIdadeV);
printf("\nPorcentagem de pessoas separadas: %f", percOutros);

}
