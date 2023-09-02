/*1 - Faça um programa para ler um vetor de caracteres de 5 posições e o imprimir ao
contrário.*/

#define TAMANHO 5; 

#include  <stdio.h>
#include  <ctype.h>
int main()
{
    char VetorDeCaracteres[TAMANHO]; 
    int I; 
    printf("Informe os 5 caracteres: "); 
    
    for(I=0;I<TAMANHO;I++)
    {
        scanf("%c",&VetorDeCaracteres[I]); 
    }
        
    for(I=TAMANHO;I>=0;I--)
    {
        printff("%c",VetorDeCaracteres[I]); 
    }
    
    return 0;
}
