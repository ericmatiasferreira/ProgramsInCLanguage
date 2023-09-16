/*

Eric Matias Ferreira Dias 
Universidade Estadual De Goias
Bacharelado em Sistemas De Informaçao
4º Periodo. 
Disciplina: Algortimos e programacao II 

8 - Faça um programa que após a leitura de duas Strings, informe como saída se as
strings são iguais ou imprima em ordem alfabética caso sejam diferentes.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define T 50 

int main(void)
{   
    setlocale(LC_ALL,"portuguese"); 
    char String1[T],String2[T];
    int I=0; 

    printf("Digite a primeira string:\n"); fgets(String1,sizeof(String1),stdin);
    printf("Digite a segunda string:\n"); fgets(String2,sizeof(String2),stdin);

    if(strcmp(String1,String2)== 0)
    {
        printf("Strings iguais.\n"); 
    }
    else
    {
        printf("Ordem alfabética:\n"); 
        
        if(strcmp(String1,String2) < 0 )
        {
            printf("%s%s",String1,String2); 
        }

        else if(strcmp(String1,String2) > 0 )
        {
            printf("%s%s",String2,String1); 
        }
    }

    return 0; 
}
