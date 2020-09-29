#include <stdio.h>

   int main() {
int m[5][5], i, j;

 printf("\nDigite os 25 valores da matriz:\n");
 for (i=0; i<5; i++) {
   for (j=0; j<5; j++) {
    scanf("%d", &m[i][j]);
 }
    }
  printf("\nElementos cuja linha + coluna = par:\n");
    for (i=0; i<5; i++) {
       for (j=0; j<5; j++) { 
           if (((j+i) % 2) == 0)
printf("%d \n",m[i][j]);
  }
      }

                 }
