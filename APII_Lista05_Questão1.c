/*
Eric Matias Ferreira Dias 
Universidade Estadual De Goiás 

1 – Dado o vetor de 10 posições, onde em cada posição será armazenado o
sobrenome de um personagem da série A Casa do Dragão, desenvolva um
programa que leia este vetor e após a leitura de todos os dados, leia um
sobrenome, verifique se o sobrenome informado está na vetor e imprima a
quantidade de vezes que o sobrenome foi encontrado.
Plano de Teste
Exemplos de Entrada Exemplos de Saída
Digite 10 sobrenomes de personagens:
Targaryen
Hightower
Hightower
Velaryon
Targaryen
Velaryon
Mysaria
Cole
Velaryon
Targaryen
Sobre nome para procurar:
Targaryen O sobrenome foi encontrado 3 vezes.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define X 100
#define Y 10

typedef char String[X]; 



int main(void)
{
	setlocale(LC_ALL,"portuguese");
	
	String Sobrenomes[Y]; 
	int I; 
	
	printf("Digite %d sobrenomes de personagens: "); 
	
	system("pause"); 
	return 0; 
}
