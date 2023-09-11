/*
Eric Matias Ferreira Dias 
Universidade Estadual De Goias

3 - Fazer um programa para ler uma string e mostrar como saída a string com todos os
caracteres convertidos para maiúsculo e minúsculo.
Exemplo: Frase: O dia Esta nublado
Maiúsculo: O DIA ESTA NUBLADO
Minusculo: o dia esta nublado
*/

#define T 100

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char Frase[T]; 
    int I=0;
    printf("Frase: "); 
    fgets(Frase,sizeof(Frase),stdin); 
    
    while(Frase[I] != '\0')
    {
        Frase[I] = toupper(Frase[I]);
        I++;
    }
    printf("Maiúsculo: %s",Frase); 
    I=0;
    while(Frase[I] != '\0')
    {
        Frase[I] = tolower(Frase[I]);
        I++; 
    }
    printf("Minúsculo: %s",Frase); 
    return 0; 
}
