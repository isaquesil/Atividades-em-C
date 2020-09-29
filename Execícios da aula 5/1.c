#include <stdio.h>

 int main() {
  int m[10][10], i, j;

   printf("\nDigite os 100 valores da matriz:\n");
  for (i=0; i<10; i++)

  for (j=0; j<10; j++)
    scanf("%d", &m[i][j]);


    printf("\nElementos da matriz:\n");

 for (i=0; i<10; i++) {
printf("\n");

  for (j=0; j<10; j++)
printf("%d \t", m[i][j]);
}

}
