#include <stdio.h>

int main() {
  
   int n, at;
   
    printf("Digite o ano de nascimento: \n");  
   scanf("%d", &n);

   printf("Digite o ano atual: \n");
   scanf("%d", &at);

    if (n > 0 && n <= at) {
  printf("Sua idade: %d",at - n);
}
    else
  printf("Data de nascimento invalida");
}
