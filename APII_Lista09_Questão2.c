/*
2 - Analise a função Potencia() apresentada a seguir e desenvolva a função
principal para que o programa leia dois números inteiros e imprima o valor da
potência.

Eric Matias Ferreira Dias

*/


#include <stdio.h>
#include <locale.h>

int Potencia(int Base, int Expoente)
{
	int I, Pot = 1; 
	for(I=1; I<=Expoente;I++ )
	{
		Pot*= Base; 
	}
	return Pot; 
}

int main()
{
	int Base,Expoente; 
	scanf("%d",&Base); 
	scanf("%d",&Expoente); 
	printf("Resultado:%d",Potencia(Base,Expoente)); 
	
	return 0; 
}
