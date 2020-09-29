#include <stdio.h>

    int main()
{
int m[4][4], i, j;

  printf("\nDigite os 20 valores da matriz:\n");
  for (i=0; i<4; i++) {
  for (j=0; j<4; j++) {
 scanf("%d", &m[i][j]);
     }
}
   printf("\nElementos impares da matriz:\n");
for (i=0; i<4; i++) {
   for (j=0; j<4; j++) {

if ((m[i][j] % 2) != 0)
printf("%d \n", m[i][j]);
  }
     }
         }
