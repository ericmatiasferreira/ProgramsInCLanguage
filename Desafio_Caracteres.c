/* 
      Eric Matias Ferreira Dias. 
      Uiversidade Estadual De Goias 

      Faça um programa para ler um vetor de 12 caracteres.
      Após a leitura o programa deve:
      ● Converter os caracteres que forem letras para
      maiúsculo.
      ● Substituir os caracteres que não forem letras pelo
      asterisco.
      ● Imprimir o vetor modificado.
            
*/

#define T 12 
#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int I;
  char Vetor[T]; 
  for(I=0;I<T;I++)
  {
    //fflush(stdin);
    scanf("%99[^\n]%*c",&Vetor[I]); // Alternativa para o fflush(stdin). Que pode falhar em alguns sistemas. 
  }
  for(I=0;I<T;I++)
  {
    if(isalpha(Vetor[I]))
      Vetor[I] = toupper(Vetor[I]);
    if(isalpha(Vetor[I]) == 0)
      Vetor[I] = '*';
  }
  for(I=0;I<T;I++)
    printf("%c",Vetor[I]);
  return 0; 
}

