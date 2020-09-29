#include <stdlib.h>


 int main()
{

int n, dias;
float total;
char nome[100];


do {

printf("Digite o numero da conta: \n");
scanf("%d", &n);

if (n == 0)

break;

printf("Digite o nome do cliente: \n");
fflush(stdin);
fgets(nome, 100, stdin);

printf("Digite a quantidade de dias: \n");
scanf("\n%d", &dias);

if (dias < 10)
else


total = (dias * 30) + (dias * 8);

printf("Custo: %.2f\n", total);
} while(n != 0);

}
