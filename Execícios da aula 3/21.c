#include <stdio.h>
#include <stdlib.h>

  int main()
{

 float rendaPessoal, rendaFamiliar, alimentacao, outros;
 float outrasDespesas=0, total=0;
 float percGastamOutras, percAlimentacaoP, percAlimentacaoF;
 float percOutrasP, percOutrasF;

 int nPessoalMaior=0;

do {
 
  printf("\nDigite a renda pessoal:");
  scanf("%f", &rendaPessoal);

if (rendaPessoal == 0)

break;

printf("\nDigite a renda familiar:");
scanf("%f", &rendaFamiliar);

printf("\nDigite o gasto com alimentacao: ");
scanf("%f", &alimentacao);

printf("\nDigite o gasto com outras despesas: ");
scanf("%f", &outros);
total++;


  if (outros > 200)
outrasDespesas++;
if (rendaPessoal > rendaFamiliar)
nPessoalMaior++;

percAlimentacaoP = (alimentacao / rendaPessoal) * 100;
percAlimentacaoF = (alimentacao / rendaFamiliar) * 100;
percOutrasP = (outros / rendaPessoal) * 100;
percOutrasF = (outros / rendaFamiliar) * 100;

printf("\n Aliment. por renda pessoal: %f", percAlimentacaoP);
printf("\n Aliment. por renda familiar: %f", percAlimentacaoF);
printf("\n Outras por renda pessoal: %f", percOutrasP);
printf("\n Outras por renda familiar: %f", percOutrasF);
} while(rendaPessoal != 0);

percGastamOutras = (outrasDespesas / total) * 100;
printf("\nPerc gastam acima de 200 outras: %f ", percGastamOutras);
printf("\nCom renda pessoal maior familiar: %d ", nPessoalMaior);

}
