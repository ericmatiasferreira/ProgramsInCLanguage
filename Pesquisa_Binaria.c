/*
  Eric Matias Ferreira Dias. 
  Uiversidade Estadual De Goias 
  Programa que efetua uma pesquisa binaria.
  Visite meu GitHub em https://github.com/ELBRASILE 
*/

#define TAMANHO 6 

#include <stdio.h>
//#include <windows.h>
#include <locale.h>
int main(void)
{

  setlocale(LC_ALL,"portuguese");
  int Vetor[TAMANHO],I,Valor,Primeira,Ultima,Metade,Achou; 

  printf("Lembre que para o Binary Search o vetor deve estar ordenado. Outrora entra em erro.\n");
  printf("Insira %d valores\n",TAMANHO); 
  for(I=0;I<TAMANHO;I++)
  {
    scanf("%d",&Vetor[I]);
  }

  printf("Agora insira um valor para ser pesquisado no vetor.\n");
  scanf("%d",&Valor);

  Primeira = 0; Ultima = 5; Achou = 0; 

  while(Primeira <= Ultima && Achou == 0 )
  {
      Metade = (Primeira + Ultima)/2; 

      if(Vetor[Metade] == Valor)
        Achou = 1; 
        
      if(Vetor[Metade] < Valor)
        Primeira = Metade + 1; 
      else
        Ultima = Metade - 1; 
  }

  if(Achou == 1 )
  {
    printf(" O valor %d foi encontrado em %d\n",Valor,Metade); 
  }
  else
  {
    printf("Nao encontrado\n");
  }

  //system("pause");
  return 0; 
}
