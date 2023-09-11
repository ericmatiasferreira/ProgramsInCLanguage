/* 
      Eric Matias Ferreira Dias. 
      Uiversidade Estadual De Goias 
      Programa que efetua uma pesquisa binaria.
      Visite meu GitHub em https://github.com/ELBRASILE

      1 – Faça um programa que receba uma frase (string), substitua todas as vogais pelo
      caractere * e converte todas as consoantes para maiúsculo.
      Exemplo:
      Entrada: fazer exercicios faz bem.
      Saída: F*Z*R *X*RC*C**S F*Z B*M.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main(void)
{
    char Frase[100]; 
    int I=0; 
    printf("Entrada: "); 
    fgets(Frase, sizeof(Frase), stdin ); 
    while(Frase[I] != '\0')
    {
        if(Frase[I] == 'a' || Frase[I] == 'e' || Frase[I] == 'i' || Frase[I] == 'o' || Frase[I] == 'u' 
        || Frase[I] == 'A' || Frase[I] == 'E' || Frase[I] == 'I' ||Frase[I] == 'O' || Frase[I] == 'U')
        {
            Frase[I] = '*';
        }
        
        if(isalpha(Frase[I]) && Frase[I] != 'a' && Frase[I] != 'e' && Frase[I] != 'i' && Frase[I] != 'o' && Frase[I] != 'u' 
        && Frase[I] != 'A' && Frase[I] != 'E' && Frase[I] != 'I' && Frase[I] != 'O' && Frase[I] != 'U')
        {
            Frase[I] = toupper(Frase[I]); 
        }
        
        I++;
    }
    printf("Saida: "); 
    printf("%s",Frase); 
    //system("pause");
    return 0; 
}
