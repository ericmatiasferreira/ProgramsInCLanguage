/* 2 - Faça um programa para ler um vetor de caracteres de 10 posições, percorrer o
vetor lido, trancando os elementos de índice 0, ou par, pelos elementos de índice
ímpar, depois o programa deverá imprimir o vetor alterado.
Obs: os elementos devem ser trocados dentro do próprio vetor, não se deve
utilizar outro vetor.*/
#define TAMANHO 10

#include <stdio.h>
int main()
{
	char Vetor[TAMANHO]; 
	int I,Auxiliar; 
	
	for(I=0;I<TAMANHO;I++)
	{
	    fflush(stdin); 
		scanf(" %c",&Vetor[I]); 
	}
	
	for(I=0;I<TAMANHO;I++)
	{
		if(I%2==0) // Então, é par ! 
		{
			Auxiliar = Vetor[I+1]; 
			Vetor[I+1] = Vetor[I]; 
			Vetor[I] = Auxiliar; 	
		} 
	}
	
	for(I=0;I<TAMANHO;I++)
	{
		printf("%c ",Vetor[I]); 
	}
	
	return 0; 
}
