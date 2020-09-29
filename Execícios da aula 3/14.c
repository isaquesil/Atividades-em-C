#include <stdio.h>

 int main()
 {

  int n, i, fat;

 do {

 fat = 1;
 printf("Digite um numero: \n");
 scanf("%d", &n);

 if (n > 1) {
 for (i=n; i>0; i--)
 fat *= i;
 
 printf("\nFatorial: %d \n", fat);
}
  else
 break;
}
 while(n != 0);

}
