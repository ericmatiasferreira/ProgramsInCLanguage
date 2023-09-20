/*

Eric Matias Ferreira Dias 
Universidade Estadual de Goiás 
Sistemas De Informação 
4° Período. 

3 - Faça um programa que preencha uma matriz 3x3 de números inteiros e escreva os
elementos que tenham o número da linha igual ao número da coluna..



*/


#include <stdio.h>
#include <locale.h>

#define T 3

int main()
{
    setlocale(LC_ALL, "portuguese");
    int Matriz[T][T], I, J;

    for (I = 0; I < T; I++)             // Aqui vai ser atribuido os valores meu rei. 
        for (J = 0; J < T; J++)
            scanf("%d", &Matriz[I][J]);
            
            
            
    for (I = 0; I < T; I++)             // Aqui vai ser impressa a matriz para  
    {
        for (J = 0; J < T; J++)
        {
             printf("%d",Matriz[I][J]);   
        }
        printf("\n"); 
    }
        
          
     printf("\n");       // Somente um espaço para separar.       




    for (I = 0; I < T; I++) // Aqui vai ser impresso os números que estão na diagonal principal. 
    {
        for (J = 0; J < T; J++)
        {
            if (I == J)
                printf("%d ", Matriz[I][J]);
            else
                printf("  "); 
        }
        printf("\n");
    }

    return 0;
}
