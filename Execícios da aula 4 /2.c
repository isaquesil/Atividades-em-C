#include <stdio.h>



  int main() {

 int i;
 char l[10];

printf("\nDigite 10 letras:\n");
for (i=0; i<10; i++) {
fflush(stdin);
scanf("%c", &l[i]);
}


  printf("\nLista com as letras numeradas\n");

for (i=0; i<10; i++)
printf("%d Letra: %c \n", i+1, l[i]);
}
