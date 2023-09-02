/* 3 – O trecho de código abaixo cria um vetor de caracteres de 15 posições e o
inicializa com uma sequência de caracteres.
#include <stdio.h>
#define TAM 13
int main()
{
char NomeEmail[TAMANHO] = {'R','u','i',' ','D','i','a','s ',' ','R','e','i','s'};
}
Os caracteres colocados no vetor NomeEmail representam um nome que será
utilizado para criar um e-mail e não pode letras maiúsculas, nem espaços em
branco.
Insira os códigos no programa para:
1- Imprimir o vetor da forma como ele foi inicializado.
2- Percorrer os elementos do vetor trocando as letras maiúsculas por minúsculas
e os espaços em branco pelo caracter '_'
3- Imprimir o vetor alterado.
Depois troque o conteúdo do vetor por outro nome com letras maiúsculas e espaços
em branco e teste o programa novamente.
Plano de Teste
Exemplos de Saída
Rui Dias Reis
rui_dias_reis 

Eric Matias F. Dias. 
Universidade Estadual de Goiás.  
*/



#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> 
#define TAMANHO 13

int main(void)
{
    int I; 
    char NomeEmail[TAMANHO] = {'R','u','i',' ','D','i','a','s',' ','R','e','i','s'};
    for(I=0;I<TAMANHO;I++)
    {
        printf(" %c",NomeEmail[I]); 
    }
    
    for(I=0;I<TAMANHO;I++)
    {
        if(isupper(NomeEmail[I]))
        {
            NomeEmail[I] = tolower(NomeEmail[I]);
        }
        
        if(isspace(NomeEmail[I]))
        {
            NomeEmail[I] = '_'; 
        }
    }
    printf("\n"); 
    for(I=0;I<TAMANHO;I++)
    {
        printf(" %c",NomeEmail[I]); 
    }
    return 0; 
}
