#include <stdio.h>
#include <stdlib.h>

 int   main()  {
   char nomes[50][100];

     int estoque[50][2];
    int i;


 printf("\nDigite os dados das 50 plantas:\n");

 for (i=0; i<5; i++) {

   printf("\nDigite o nome da planta:\n");

    fflush(stdin);

   fgets(nomes[i], 100, stdin);
  printf("\nDigite o estoque atual:\n");
      scanf("%d", &estoque[i][0]);
              printf("\nDigite o estoque minimo:\n");
   scanf("%d", &estoque[i][1]);
 }
    printf("Plantas com estoque baixo\n");
 printf("Nome \t\t\t Estoque Atual \t Estoque Minimo\n");
   for (i=0; i<5; i++) {
    if (estoque[i][0] < estoque[i][1])
     printf("%s \t\t\t ", nomes[i]);
printf("%d \t\t %d \n", estoque[i][0], estoque[i][1]);
}

}
