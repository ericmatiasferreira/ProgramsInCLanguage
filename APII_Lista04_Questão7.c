/*7 – Faça um programa que leia uma string e imprima uma nova string, que
corresponde à string original, lida de trás para frente. Por exemplo, leitura da cadeia
"Aluno", impressão da cadeia "onulA".
Plano de Teste
Exemplos de Entrada
Exemplos de Saída
Digite as letras e pressione <Enter> para
finalizar a leitura:
UEG
GEU
Digite as letras e pressione <Enter> para
finalizar a leitura:
ARARA
ARARA
Digite as letras e pressione <Enter> para
finalizar a leitura (no máximo 20 letras):
BINGO
OGNIB */

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define T 20 

int main(void)
{
    char String[T];
    int I; 

    printf("Digite as letras e pressione <Enter> para finalizar a leitura:UEG\n");
    fgets(String,sizeof(String),stdin); 

   
   for (I=sizeof(String);I>=0;I--)
   {
        printf("%c",String[I]); 
   }

    return 0; 
}
