#include <stdio.h>


  int main()

{

  int matricula, disciplinas, i;
 float cr, maior=0, nota, notas;

do
 {
 notas = 0;
 printf("\nDigite a matricula: ");
 scanf("%d", &matricula);

if (matricula < 1 || matricula > 5000)209
 break;


 printf("\nDigite a quantidade de disciplinas cursadas: ");
 scanf("%d", &disciplinas);

i = 1;

while(i <= disciplinas) {
 printf("\nDigite a nota da disciplina %d: ", i);
 scanf("%f", &nota);
notas += nota;
i++;
}
cr = notas / disciplinas;

 printf("\nMatricula: %d", matricula);
 printf("\nNumero de disciplinas: %d", disciplinas);
 printf("\nCR: %f", cr);
 
 
if (disciplinas > 4 && cr > maior) {
maior = cr;
}
}
 while(matricula > 0 && matricula <= 5000);

printf("\nMaior CR dos alunos: %f", maior);

}
