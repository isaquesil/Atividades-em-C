#include <stdio.h>


 int main() {
  int A[3][3], B[3][3], diferenca[3][3], i, j;

  printf("\nDigite os 9 valores da primeira matriz:\n");

   for (i=0; i<3; i++)
        for (j=0; j<3; j++)
scanf("%d", &A[i][j]);


  printf("\nDigite os 9 valores da segunda matriz:\n");
  for (i=0; i<3; i++)
               for (j=0; j<3; j++)
scanf("%d", &B[i][j]);

 printf("\nMatriz diferenca:\n");
  for (i=0; i<3; i++)
      for (j=0; j<3; j++)
diferenca[i][j] = A[i][j] - B[i][j];

  for (i=0; i<3; i++) {
printf("\n");
   for (j=0; j<3; j++)
printf("%d \t", diferenca[i][j]);
}

}
