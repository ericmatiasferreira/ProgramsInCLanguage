/*
Eric Matias Ferreira Dias 
Universidade Estadual De Goias 

2 - Faça um programa que receba uma frase e substitua todas as consoantes pelo
caractere @.
Exemplo:
Entrada: LOGICA DE PROGRAMAÇAO.
Saída: @O@I@A @E @@O@@A@A@AO



*/
#define T 100; 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
int main()
{
  char Frase[T]; 
  int I = 0; 
  printf("Entrada: ");
  fgets(Frase, sizeof(Frase), stdin);
  while(Frase[I] != '\0')
  {
    if(isalpha(Frase[I]) && Frase[I] != 'a' && Frase[I] != 'e' && Frase[I] != 'i' && Frase[I] != 'o' && Frase[I] != 'u' 
        && Frase[I] != 'A' && Frase[I] != 'E' && Frase[I] != 'I' && Frase[I] != 'O' && Frase[I] != 'U')
        {
            Frase[I] = "@"; 
        }
      I++;
  }
  printf("%s",Frase); 
  return 0; 
}
