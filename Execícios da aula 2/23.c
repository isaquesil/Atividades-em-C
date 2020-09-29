#include <stdio.h>
#include <stdlib.h>

void main()
{
  int calorias = 0;
  int prato, sobremesa, bebida;

    printf("\nPrato");
    
       printf("\n1 - Vegetariano");
     
      printf("\n2 - Peixe");
 
     printf("\n3 - Frango");


      printf("\n4 - Carne");
    
  printf("\nDigite a opcao: ");
     
  scanf("%d",&prato);
      
   printf("\nSobremesa");

   printf("\n1 - Abacaxi");
 
   printf("\n2 - Sorvete diet");
 
   printf("\n3 - Mousse diet");

    printf("\n4 - Mousse chocolate");

    printf("\nDigite a opcao: ");
   scanf("%d",&sobremesa);

   printf("\nBebida");

   printf("\n1 - Cha");
  
  printf("\n2 - Suco de laranja");

    printf("\n3 - Suco de melao");

    printf("\n4 - Refrigerante diet");

    printf("\nDigite a opcao: ");
  scanf("%d",&bebida);

switch (prato) {
case 1:
calorias += 180;

break;
case 2:
calorias += 230;

break;
case 3:
calorias += 250;

  break;
case 4:
calorias += 350;

 break;
}

  switch (sobremesa) {
case 1:
calorias += 75;

   break;
case 2:
calorias += 110;
 
 break;
case 3:
calorias += 170;

    break;
case 4:
calorias += 200;

   break;
}

    switch (bebida) {
case 1:
calorias += 20;

   break;
case 2:
calorias += 70;

   break;
case 3:
calorias += 100;
 
   break;

case 4:
calorias += 65;

   break;
}
   printf("Total de calorias: %d",calorias);

}
