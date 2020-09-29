#include <stdio.h>



  int main()  {

    int i;
    float sal[20], salReaj[20];

for (i=0; i<20; i++) {
printf("\nDigite o salario: \n");
scanf("%f",&sal[i]);
salReaj[i] = sal[i] + (sal[i] * 0.08);
}         

 printf("\nNumero \tSalario \t Salario Reajustado\n");

for (i=0; i<20; i++) {

printf("%d \t",i+1);
printf("%f \t",sal[i]);
printf("%f \n",salReaj[i]);
}

}
