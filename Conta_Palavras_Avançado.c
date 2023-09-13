/*
Eric Matias Ferreira Dias 
Universidade Estadual de Goiás 
*/

#define T 100 

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char texto[T]; 
    int contagem = 0;
    bool dentroDaPalavra = false;

    fgets(texto, sizeof(texto), stdin); 
  
    for (int i = 0; texto[i] != '\0'; i++)
	   {
              // Verifique se o caractere atual é um espaço em branco ou pontuação
              if (isspace(texto[i]) || ispunct(texto[i]))
      	      {
                  dentroDaPalavra = false;
              } 
              else if (!dentroDaPalavra) 
        	   {
                  // Encontrou o início de uma nova palavra
                  contagem++;
                  dentroDaPalavra = true;
            }
    }

    printf("O número de palavras na string é: %d\n", contagem);

    return 0;
}
