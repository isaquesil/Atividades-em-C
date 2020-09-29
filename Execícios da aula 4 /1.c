#include <stdio.h>

  int  main() {

int v[15], n, aux=0, i;

  printf("\nDigite os 15 valores do vetor:\n");

for (i=0; i<15; i++)
 scanf("%d", &v[i]);


   printf("\nDigite um numero para procurar no vetor:\n");
scanf("%d", &n);

for (i=0; i<15; i++) {

if (v[i] == n) {

printf("\nNumero encontrado na posicao %d\n", i+1);
aux = 1;

break;
}
}

if (aux == 0)
printf("\nNumero nao encontrado\n"); 
}
