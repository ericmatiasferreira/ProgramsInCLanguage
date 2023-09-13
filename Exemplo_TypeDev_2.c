/*
	Eric Matias Ferreira Dias - Sistemas De Informação 
	Universidade EStadual De Goiás 
	
	Faça um programa que declara um vetor de strings com 10 posições, faz a leitura e
	realiza a busca de um nome no vetor. Suponha que todos os nomes são
	diferentes.
 */
 
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define T 100 
#define TAMVET 6
typedef char String[T]; 

int main()
{	 
	String VetorNomes[TAMVET],NomeBusca; 
	int I,Indice = -1; 
	
	printf("Digite %d Nomes: ",TAMVET); 
	for(I=0;I<TAMVET;I++)
		fgets(VetorNomes[I], sizeof(VetorNomes), stdin); 
	
	
	printf("Digite um nome para realizar a busca: "); 
		fgets(NomeBusca, sizeof(NomeBusca), stdin);
		
	for(I=0;I<TAMVET;I++)
	{
		if(stricmp(NomeBusca,VetorNomes[I]) == 0)
		{
			Indice = I; 	
		}	
	} 
	
	if(Indice == -1)
		printf("O nome buscado não existe no vetor.\n"); 
	else
		printf("%s existe no vetor na posição %d.\n",NomeBusca,Indice); 
	
	return 0;
}
