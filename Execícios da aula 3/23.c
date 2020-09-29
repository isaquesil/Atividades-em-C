#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 int main()
{

 float altura, peso, maisAlta=0, maisPesado=0, totalIdade=0;
 int idade, sexo, total=0;
 char nome[100], nomeAlta[100], nomePesado[100];

 do {

printf("\nDigite o nome do atleta: ");
fflush(stdin);

gets(nome);

if (strcmp(nome, "@") == 0)

break;


printf("\nDigite a idade do atleta: ");
scanf("%d", &idade);

printf("\nDigite o peso do atleta: ");
scanf("%f", &peso);

printf("\nDigite a altura do atleta: ");
scanf("%f", &altura);

printf("\nDigite o sexo do atleta <1-M / 2-F>: ");
scanf("%d", &sexo);
 if (sexo == 2 && altura > maisAlta) {
maisAlta = altura;
strcpy(nomeAlta, nome);
}

if (sexo == 1 && peso > maisPesado) {
maisPesado = peso;
strcpy(nomePesado, nome);
}
totalIdade += idade;
total++;
} while(strcmp(nome, "@") != 0);
printf("\nAtleta mais alta: %s\t %f", nomeAlta, maisAlta);
printf("\nAtleta mais pesado: %s\t %f", nomePesado, maisPesado);
printf("\nMedia de idade dos atletas: %f", totalIdade / total);

}
