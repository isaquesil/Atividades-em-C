#include <stdio.h>

   int main()
 {
   int a, c, ad;

  printf("Digite o numero 1: ");
  scanf("%d",&a);
  
   printf("Digite o numero 2: ");
  scanf("%d",&c);


ad = a + c;

if (ad > 20) {
 ad += 8;
}

else {
}
  ad -= 5;

  printf("%d", ad);

}

