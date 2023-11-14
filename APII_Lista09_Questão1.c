1 - Analise a função principal a seguir e desenvolva a função necessária para
que o programa funcione corretamente:


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>


int Funcao_Verifica(int Num1, int  Num2)
{
	if(Num1 > Num2)
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
	int Valor1, Valor2; 
	setlocale(LC_ALL,"Portuguese");
	printf("Digite dois números: ");
	scanf("%d",&Valor1);  
	scanf("%d",&Valor1); 
	printf("O maior número é:%d\n",Funcao_Verifica(Valor1,Valor2));
	 
	system("Pause");    
	return 0; 
}
