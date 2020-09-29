#include <stdio.h>

 int main()
 {
  
  int n;

   printf("Digite o numero: ");
  scanf("%d", &n);

   if ((n % 3) == 0 && (n % 7) == 0)
        printf("Divisivel por 3 e por 7");

   else
      printf("Nao e divisivel por 3 e por 7");
}
