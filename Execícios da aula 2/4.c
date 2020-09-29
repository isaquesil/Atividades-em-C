#include <stdio.h>

  int main()
 {
   
   int num;

    printf("Digite o numero: ");
   scanf("%d", &num);

   if ((num % 5) == 0)
   printf("E divisivel por 5");

          else
   printf("Nao e divisivel por 5");
}
