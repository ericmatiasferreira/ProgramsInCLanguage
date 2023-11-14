/*

6 – Faça uma função chamada MULTIPLO que recebe como parâmetro dois
números inteiros e retorna o 1, se o primeiro número for múltiplo do segundo,
número e o 0 caso contrário.
Exemplo de utilização da função:
MULTIPLO(35,5)
Retornará o valor 1
MULTIPLO(35,2)
Retornará o valor 0
Depois faça um programa que lê dois números inteiros e escreve se o primeiro
é múltiplo do segundo, utilizando a função MULTIPLO.
Plano de Teste
Exemplos de Entrada Exemplos de Saída
Número 1 : 25
Número 2 : 5
O número 25 é múltiplo do número 5
Número 1 : 31
Número 2 : 2
O número 31 não é múltiplo do número 2

*/

#include <stdio.h>
#include <locale.h>

int Multiplo (int Num1, int Num2)
{
	if (Num1 % Num2 == 0)
	{
		return 1; 
	}
	else
	{
		return 0; 
	}
}

int main()
{
	int N1,N2; 
	setlocale(LC_ALL, "Portuguese"); 
	
	printf("Numero 1 :");
	scanf("%d", &N1);
	printf("Numero 2 :"); 
	scanf("%d", &N2);
	

	
	if (Multiplo (N1,N2) == 1)
	{
		printf("O número %d é múltiplo do número %d\n " ,N1,N2); 
	}
	else
	{
		printf("O número %d é múltiplo do número %d\n" ,N1,N2); 
	}
	
}
