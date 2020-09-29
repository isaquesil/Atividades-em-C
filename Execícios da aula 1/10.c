int main(void)
{
  
  float nm1, nm2, nm3, media;
  

  printf("Digite o primeiro numero: ");
  scanf("%f",&nm1);
  
  printf("Digite o segundo numero: ");
  scanf("%f",&nm2);
  
  printf("Digite o terceiro numero: ");
  scanf("%f",&nm3);
  
  media = (nm1 + nm2 + nm3) / 3;
  
 
  printf("Media      = %.1f\n",media);
  
  system("pause");
  return 0;  
}
