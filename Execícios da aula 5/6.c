#include <stdio.h>



  int main() {
    int A[2][2], B[2][2], SOMA[2][2], i, j;

   printf("\nDigite os 4 valores da matriz A:\n");
      for (i=0; i<2; i++)
          for (j=0; j<2; j++)
scanf("%d", &A[i][j]);
  printf("\nDigite os 4 valores da matriz B:\n");


  for (i=0; i<2; i++)
           for (j=0; j<2; j++)
scanf("%d", &B[i][j]);
printf("\nSoma das matrizes:\n");

  for (i=0; i<2; i++)
            for (j=0; j<2; j++)
SOMA[i][j] = A[i][j] + B[i][j];

  for (i=0;i<2;i++) {
 printf("\n");
      for (j=0; j<2; j++)
  printf("%d \t", SOMA[i][j]);
}

}
