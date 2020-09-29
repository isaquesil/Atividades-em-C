#include <stdio.h>



   int main()
{
   int n, cont=0;
 do {
 printf("Digite um numero: \n");
scanf("%d", &n);
 
   if (n >= 100 && n <= 200)
 cont++;
}

 while(n != 0);

printf("Quantidade de numeros entre 100 e 200: %d \n", cont);

}
