#include <stdio.h>



  int main()
{

  int i, n, aprovado=0;
  float nota, soma=0, percentual, media, reprovados;


printf("Digite a quantidade de alunos na turma: \n");
scanf("%d", &n);

for (i=1; i<=n; i++) {

printf("Digite a nota do aluno: \n");
scanf("%f", &nota);

if (nota >= 7)

aprovado++;
soma += nota;
}
media = soma / n;
reprovados = n - aprovado;
percentual = (reprovados / n) * 100;

printf("\nMedia da turma: %f \n", media);
printf("\nNumero de aprovados: %d \n", aprovado);
printf("\nPercentual de Reprovados: %f \n", percentual);

}
