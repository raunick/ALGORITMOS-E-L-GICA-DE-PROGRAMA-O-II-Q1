// QUEST�O 1 - Crie um programa em linguagem C
// Disciplina : [ALGORITMOS E L�GICA DE PROGRAMA��O II Q1]
// Autor(a) : Raunick Vileforte Vieira Generoso
// Data: 30/06/2019
#include <stdio.h>
#include <string.h>

int main(void) {
  //a) Armazenar em uma constante do tipo caractere, o n�mero do seu RA sem o tra�o.
  const char const_RA[9] = {'1','8','7','7','9','5','8','5'};
  //b) Criar um vetor do tipo inteiro com o tamanho da string armazenada na sua constante.
  int i,RA[9];


  printf("=========================\n");
  printf("*MAPA - ALGORITIMO II Q1*\n");
  printf("->RA do aluno: %s<-",const_RA);
  printf("\n=========================\n\n");

  //c) Alimentar o vetor de forma que cada caractere do seu RA, que est� na constante, fique armazenado em uma posi��o do seu novo vetor. Para isso, utilize um la�o de repeti��o.
  for (i=0;i<8;i++){
    RA[i]=const_RA[i];
    printf("Atribuindo '%c' ---> RA[%d] \n",RA[i],i);
  }
  
  printf("\n=========================\n");
  printf("*******FINALIZANDO*******\n");
  printf("=========================\n\n");
  //d) Imprimir o vetor preenchido de forma que apare�a um n�mero em cada linha. Para isso, utilize um la�o de repeti��o diferente do utilizado na alternativa anterior.
  i=0;
  while (i<8){
    printf("Valor atribuido RA[%d]-> %c\n",i,RA[i]);
    i++;
  }
  printf("\n=========================\n");
  printf("********CONCLUIDO********\n");
  printf("=========================\n");
  

  return 0;
}
