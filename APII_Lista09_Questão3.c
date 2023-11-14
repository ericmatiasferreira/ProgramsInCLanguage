/*3 - Crie uma função em linguagem C que receba 2 números e retorne o menor
valor.

Eric Matias Ferreira Dias 
Universidade Estadual de Goiás 
Sistemas de Informação.
 
*/
#include<stdio.h>

int funcao_retorna_menor(int Num1, int Num2)
{
	if(Num1 < Num2)
	{
		return Num1; 
	}
	else
	{
		return Num2; 
	}
}

int main()
{
	int A,B; 
	scanf("%d",&A); 
	scanf("%d",&B); 
	printf("%d",funcao_retorna_menor(A,B)); 
	
	return 0; 
}
