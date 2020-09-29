#include <stdio.h>


 int main() {  

  float vProduto, vVenda;


   printf("Digite o valor do produto: ");
  scanf("%f", &vProduto);

  if (vProduto < 20) {
 vVenda = vProduto + (vProduto * 0.45);
}

   else {

   vVenda = vProduto + (vProduto * 0.3);
}

printf("Valor do produto para venda: %.2f \n", vVenda);
}
