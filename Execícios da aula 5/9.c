#include <stdio.h>
#include <stdlib.h>
   int main() {


int matriz[3][5], somalinha[3], i, j;

     for (i=0; i<3; i++)
      somalinha[i] = 0;
        printf("\nDigite os 15 valores da matriz:\n");

     for (i=0; i<3; i++) {
        for (j=0; j<5; j++) {
  scanf("%d", &matriz[i][j]);
  }
     }

  for (i=0; i<3; i++) {
      for (j=0; j<5; j++) {
    somalinha[i] += matriz[i][j];
  }
     }

 printf("\nSoma das linhas da matriz:\n");
    for (i=0; i<3; i++)
       printf("%d \t", somalinha[i]);

}
