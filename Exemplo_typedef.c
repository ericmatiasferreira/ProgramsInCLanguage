/*
Eric Matias Ferreira Dias 
Universidade Estadual De Goiás

Programa que declara um vetor de strings com 6 posições, faz a
leitura e a impressão do vetor.

*/
# define T 100 // Constante para o tamanho de cada string. 
#define Y 5 // É uma constante para o tamanho do vetor. 

typedef char String[T]; // Criação de um novo tipo de dado chamado "String". 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <windows.h>

int main(void)
{
	
	//setlocale(LC_ALL,"portuguese");
	String VetorNome[Y]; // Declaração de um vetor de strings com 5 posições. 
	int I; 
  
	printf("Digite %d Nomes: ",Y); 
	for(I=0;I<Y;I++)
		fgets(VetorNome[I], sizeof(VetorNome), stdin);	
  
	printf("Os nomes digitados foram:\n"); 
	for(I=0;I<Y;I++)
		printf("%s\n",VetorNome[I]); 
  
	system("pause");
	return 0;
}
