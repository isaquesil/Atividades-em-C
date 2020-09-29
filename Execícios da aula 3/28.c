#include <stdio.h>


int main()
{
  int idade, total=0, mais50=0, cont=0;

 float peso, altura, somaAltura=0, mediaAltura;
 float menos40=0, percPeso40;

do {
printf("\nDigite a idade ou zero para encerrar: ");
scanf("%d", &idade);
if (idade == 0)
break;
printf("\nDigite a altura: ");
scanf("%f", &altura);
printf("\nDigite o peso: ");
scanf("%f", &peso);
total++;
if (idade > 50)
mais50++;
if (idade > 9 && idade < 21) {
somaAltura += altura;
cont++;
}

if (peso < 40)
menos40++;
} while(idade > 0);
if (total == 0)
total = 1;
if (cont == 0)
cont = 1;
mediaAltura = somaAltura / cont;
percPeso40 = menos40 / total;
printf("\nQuantidade de pessoas com mais de 50 anos: %d", mais50);
printf("\nMedia de altura entre 10 e 20 anos: %f", mediaAltura);
printf("\nPorcentagem com peso inferior a 40 quilos: %f", percPeso40);

}
