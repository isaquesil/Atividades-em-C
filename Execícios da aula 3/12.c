#include <stdio.h>


  int main()
{
  int cont=0;
  float a=5000000, b=7000000;

 while(a < b) {
  a += a * 0.03;
  b += b * 0.02;
  cont++;
}


  printf("Total de anos: %d", cont);

}
