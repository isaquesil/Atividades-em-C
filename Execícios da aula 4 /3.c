#include <stdio.h>

  int main()
{
 int v[15], i;

 
  printf("\nDigite os 15 valores do vetor:\n");

for (i=0; i<15; i++)
 scanf("%d", &v[i]);


  printf("Posicao \t Numero \n");

   for (i=0; i<15; i++) {
  if ((v[i] % 2) == 0)

  printf("%d \t\t %d \t par\n", i, v[i]);

  else
  printf("%d \t\t %d \t impar\n", i, v[i]);
}

}
