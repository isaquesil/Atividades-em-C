#include <stdio.h>
#include <stdlib.h>
   

  int main()
{
   int vet[10], w[10], i, j, aux=0;

   printf("\nDigite os 10 valores do vetor:\n");  
for (i=0; i<10; i++)
scanf("%d", &vet[i]);

   for (i=0; i<10; i++) {
   aux=1;
   if (vet[i] == 1)
   w[i] = 1;
 else {
   for (j=1; j<vet[i]; j++) {
   aux *= j + 1;
}
   w[i] = aux; 

 }
     }
          printf("\nNumero \t Fatorial:\n");
for (i=0; i<10; i++)
       printf("%d \t %d \n", vet[i], w[i]);

}
