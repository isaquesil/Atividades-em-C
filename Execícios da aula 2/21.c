#include <stdio.h>
#include <stdlib.h>

  int main() {

  int t;
  char livro[100];

  printf("Digite o nome do livro: ");
 scanf("%s", &livro);

  printf("Digite o tipo de usuario <1-Professor / 2-Aluno>: ");
 scanf("%d", &t);

 printf("Nome do livro: %s\n", livro);

 if (t == 1) {
printf("Tipo de usuario: Professor \nTotal de Dias: 10");
}

 else {
printf("Tipo de usuario: Aluno \nTotal de Dias: 3");
}
}
