#include <stdio.h>
#include <stdlib.h>

     int main() {


  int m[5][10], i, j, maior;

  printf("\nDigite as 50 alturas dos atletas:\n");
 for (i=0; i<5; i++) { 
    printf("Delegacao %d: \n", i+1);

for (j=0; j<10; j++)
      scanf("%d", &m[i][j]); 

}
   printf("\nMaiores alturas entre as delegacoes:\n");
     for (i=0; i<5; i++) {
 maior = m[i][0];
    for (j=1; j<10; j++) {
  if (m[i][j] > maior)
  maior = m[i][j];
}
   printf("\nMaior da delegacao %d: %d\n", i+1, maior);
}

}
