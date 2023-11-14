/*

4 - Crie uma função em linguagem C que receba 3 números e retorne o maior
valor, use a função da questão 1 como exemplo.

Eric Matias Ferreira Dias 
Universidade Estadual de Goiás 
Sistemas de Informação.
 
*/


#include <stdio.h>

int retorna_maior(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2 && Num1 > Num3)
	{
		return Num1;
	}
	
	if (Num2 > Num1 && Num2 > Num3)
	{
		return Num2;
	}
	else
	{
		return Num3;
	}
}

int main()
{
	int Num1,Num2,Num3; 
	scanf("%d", &Num2); 
	scanf("%d", &Num2);
	scanf("%d", &Num3);  
	
	printf("%d", retorna_maior(Num1, Num2, Num3)); 
	return 0; 
}
