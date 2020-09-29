#include <stdio.h>


  int  main() {

   int i;
  char nome[100];
  float sal, al;
 
  for (i=1; i<=10; i++) {
 
   printf("Digite o nome: \n");
  fflush(stdin);
  fgets(nome, 100, stdin);
 
  printf("Digite o salario: \n");
   scanf("%f", &sal);

  if (sal <= 1300) {
  printf("Isento de imposto \n");
}
 
   else {
  if (sal <= 2300) {
  al = (sal * 10) / 100;
 }
    else {
  al = (sal * 15) / 100;
}
    printf("Aliquota: %f \n", al);
}
}

}
