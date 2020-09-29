#include <stdio.h>

   int main(){
   

  int sb, pt;
  
    printf("Digite o salario bruto: ");
    scanf("%d",&sb);

    printf("Digite o valor da prestacao: ");
  scanf("%d",&pt);
 
  if (pt <= (sb * 0.3)) 
  printf("Emprestimo consedido");
 

     else
printf("Emprestimo nao consedido");
}
