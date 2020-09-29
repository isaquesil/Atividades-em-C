#include <stdio.h>
#include <stdlib.h>

   int main()
{

    int m[5][5], i, j, opcao;

  printf("\nDigite os 25 valores da matriz:\n");
    for (i=0; i<5; i++) {
       for (j=0; j<5; j++)
  scanf("%d", &m[i][j]);
}

    printf("\nDigite a linha da matriz:\n");
  scanf("%d", &opcao);

  if (opcao > 0 && opcao < 6) {
    opcao += -1;
    printf("\nElementos da linha da matriz:\n");

 for (i=0; i<5; i++)

printf("%d ", m[opcao][i]);

}
else

printf("\nA linha nao existe\n");
 }
