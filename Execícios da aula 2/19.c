#include <stdio.h>

  int main() {

  float n1, n2, n3;
 printf("Digite os pontos do primeiro atleta: ");
 scanf("%f",&n1);

  printf("Digite os pontos do segundo atleta: ");
  scanf("%f",&n2);

  printf("Digite os pontos do terceiro atleta: ");
  scanf("%f",&n3);

   if (n1 < n2 && n1 < n3) {

   if (n2 < n3)
   printf("%f, %f, %f", n1, n2, n3);
  else
   printf("%f, %f, %f", n1, n3, n2);
}

   else if (n2 < n1 && n2 < n3) {
  if (n1 < n3)
   printf("%f, %f, %f", n2, n1, n3);
   else
   printf("%f, %f, %f", n2, n3, n1);
}
   else {
  if (n2 < n1)
   printf("%f, %f, %f", n3, n2, n1);
   else
   printf("%f, %f, %f", n3, n1, n2);
}
    float media = (n1 + n2 + n3) / 3;
   if ((n1 + n2 + n3) >= 100)
   printf("\n%.2f", media);
   else
   printf("\nEquipe desclassificada");
}
