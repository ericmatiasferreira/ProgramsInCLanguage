/*

Eric Matias Ferreira Dias 
Universidade Estadual De Goiás. 


6 – Definir uma string 20 caracteres e depois ler a string. Após a leitura, o programa
deve escrever quantas vezes cada vogal foi digitada, independente se maiúsculas ou
minúsculas.




BASICAMENTE: PROGRAMA QUE CONTA VOGAIS QUE UM USUARIO INSERE 


*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <ctype.h>

# define T 20

int main(void)
{

    char String[T]; 
    int I, 
        ContadorVogalA = 0 ,
        ContadorVogalE = 0 , 
        ContadorVogalI = 0 ,
        ContadorVogalO = 0 ,
        ContadorVogalU = 0 ; 


    printf("Digite as letras e pressione <Enter> para finalizar a leitura (no máximo 20 letras):\n"); 

    fgets(String,sizeof(String),stdin); 

    for(I=0;String[I] != '\0'; I++)
    {
        char C = String[I]; 

        switch (C)
        { 
        
            case 'a':
            case 'A': 
                ContadorVogalA+=1; 
                break;
            case 'e':
            case 'E': 
                ContadorVogalE+=1; 
                break;
            case 'i':
            case 'I': 
                ContadorVogalI+=1; 
                break; 
            case 'o':
            case 'O': 
                ContadorVogalO+=1; 
                break;   
            case 'u':
            case 'U': 
                ContadorVogalU+=1; 
                break;   
        }
    }

    printf("Letra a: %d \n",ContadorVogalA);
    printf("Letra e: %d \n",ContadorVogalE);
    printf("Letra i: %d \n",ContadorVogalI);
    printf("Letra o: %d \n",ContadorVogalO);
    printf("Letra u: %d \n",ContadorVogalI);

    return 0; 
}
