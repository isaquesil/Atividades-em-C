
#include <stdio.h>
int main ( )
{
  float valori, descont, valorf;
  
  printf ("Didite o valor da mercadoria\n");
  scanf ("%f", &valori);
  printf ("Digite o valor do desconto (valor da porcentagem)\n");
  scanf ("%f", &descont);
   
  printf ("O valor do desconto e de: %.2f por cento", descont);

  valorf = valori - (descont/100 * valori);
  printf ("\n\n");
  printf ("O novo valor da mercadoria com desconto e R$: %2.f", valorf);

return 0;
}
