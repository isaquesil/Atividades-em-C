#include <stdio.h>
#include <stdlib.h>

 int main() {
 
  char nome[100];

    int idade;
   printf("Digite o nome: ");
    scanf("%s", &nome);

   printf("Digite a idade: ");
scanf("%d", &idade);
   
   if (idade <= 10)
printf("Valor: 30 reais");

    else if (idade <= 29)
printf("Valor: 60 reais");

    else if (idade <= 45)
printf("Valor: 120 reais");

    else if (idade <= 59)
printf("Valor: 150 reais");

    else if (idade <= 65)
printf("Valor: 250 reais");

     else
printf("Valor: 400 reais");
}
