#include <stdio.h>
 


  int main() {

  int v[8], i, c=0;


 printf("\nDigite os 8 valores do vetor:\n");
for (i=0; i<8; i++)
scanf("%d", &v[i]);

for (i=0; i<8; i++)
if ((v[i] % 6) == 0)
c++;
for (i=0; i<8; i++)
printf("\nNumero: %d\n", v[i]);
printf("\nMultiplos de 6: %d\n", c	);
}
