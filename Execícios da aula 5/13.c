#include <stdio.h>
#include <stdlib.h>

  int  main()  {
     int manicure=0, servico;
            int servicos[5][3], i, j, soma;


    for (i=0; i<5; i++) {
           for (j=0; j<3; j++)
  servicos[i][j]=0;
 }

    do {
       printf("Informe a manicure <1-5>:\n");
              scanf("%d", &manicure);
                 printf("Informe o servico <1-pe 2-mao 3-podologia>:\n"); 
              scanf("%d", &servico);    
  if (manicure >= 1 && manicure <=5) {
      if (servico >= 1 && servico <= 3)
       servicos[manicure-1][servico-1]++;

else
     printf("Servico invalido!\n");

 }

else
   printf("Manicure invalida!\n");
}
     while (manicure != 0);
  
printf("\nFaturamento das manicures:\n");
 
 for (i=0; i<5; i++) {
     soma = servicos[i][0] * 10;
          soma += servicos[i][1] * 15;
               soma += servicos[i][2] * 30;
  printf("\nManicure %d: %d\n", i+1, soma);
}

}
