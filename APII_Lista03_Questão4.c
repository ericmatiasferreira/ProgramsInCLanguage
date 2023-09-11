/*
  Eric Matias Ferreira Dias 
  Universidade Estadual De Goias

  
4 - Faça um programa que leia uma string e mostre quantas palavras existem nesta
string.
Plano de Teste
Exemplos de Entrada Exemplos de Saída
Hoje o dia está nublado
Existe(m) 5 palavra(s) na string.
Bom dia
Existe(m) 2 palavra(s) na string.
Oi
Existe(m) 1 palavra(s) na string.

*/

#include <stdio.h>
#include <string.h>

#define T 100

int main(void) {
    char Frase[T];
    int ContadorDePalavras = 0;
    int dentroDaPalavra = 0; // 0 significa fora da palavra, 1 significa dentro da palavra

    printf("Digite uma frase: ");
    fgets(Frase, sizeof(Frase), stdin);

    for (int i = 0; Frase[i] != '\0'; i++) {
        if (Frase[i] == ' ' || Frase[i] == '\n' || Frase[i] == '\t') {
            dentroDaPalavra = 0;
        } else if (!dentroDaPalavra) {
            ContadorDePalavras++;
            dentroDaPalavra = 1;
        }
    }

    printf("Existe(m) %d palavra(s) na string.\n", ContadorDePalavras);

    return 0;
}
