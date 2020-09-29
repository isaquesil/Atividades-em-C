#include <stdio.h>
#include <stdlib.h>

  int main() {
     int matriz[3][5], somacoluna[5], i, j;


    for (i=0; i<5; i++)
      somacoluna[i] = 0;
    printf("\nDigite os 15 valores da matriz:\n");
  
   for (i=0; i<3; i++) {
    for (j=0; j<5; j++)
  {
 
   scanf("%d", &matriz[i][j]);
 }
     }
   for (i=0; i<5; i++) {
        for (j=0; j<3; j++)
 {

    somacoluna[i] += matriz[j][i];
   }
 }

    printf("\nSoma das colunas da matriz:\n");

       for (i=0; i<5; i++)

    printf("%d \t", somacoluna[i]);
}
