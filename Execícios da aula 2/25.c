#include <stdio.h>


  int main()
{
   
 float indice;

   printf("Digite o indice de poluicao: \n");
scanf("%f", &indice);
 
   if (indice >= 0.5) {
printf("Suspender atividades das industrias dos grupos 1, 2 e 3 \n"
);

}
else if (indice >= 0.4) {
printf("Suspender atividades das industrias dos grupos 1 e 2 \n");
}
else if (indice >= 0.3) {
printf("Suspender atividades das industrias do grupo 1 \n");
}
else {
printf("Indice de poluicao aceitavel para todos os grupos \n");
}

}
