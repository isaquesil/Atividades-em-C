 #include <stdio.h>
 
   
   int main() {

   int idade, bom=0, regular=0, excelente=0, opcao, i;
   float mIdade=0, percBom;

    for (i=1; i<=20; i++) {

   printf("Digite a idade: ");
  scanf("%d", &idade);

   printf("Responda sua opniao sobre o filme: \n");
    printf("1 - regular \t");
    printf("2 - bom \t");
    printf("3 - excelente \n");
    scanf("%d", &opcao);

    if (opcao == 1)
  regular++;
  
   else if (opcao == 2)
   bom++;
  
   else {
   mIdade += idade;
  excelente++;
}
}
      mIdade = mIdade / excelente;
     printf("Media de idades das pessoas que responderam excelente: %f \n",
    mIdade);

 printf("Quantidade de pessoas que respondeream regular: %d \n", regular); 
    percBom = bom;
    percBom = percBom / (i-1);
    printf("Porcentagem de pessoas que responderam bom: %f \n", percBom);

}
