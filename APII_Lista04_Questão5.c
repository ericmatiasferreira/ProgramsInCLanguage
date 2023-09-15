/*
Eric Matias Ferreira Dias 
Universidade Estadual De Goias 

5 - Faça um programa que leia um email e faça sua validação. Se não for um email
válido o programa deve mostrar a mensagem: “Email invalido!” e pedir para ler
novamente.


Plano de Teste

Exemplos de Entrada Exemplos de Saída
teste@ueg.br
E-mail válido.

www.adms.ueg.br
si.ccet@ueg.br
E-mail inválido. Digite novamente:
E-mail válido.
jose
jose.silva
jose.silva@aluno.ueg.br
E-mail inválido. Digite novamente:
E-mail inválido. Digite novamente:
E-mail válido.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define T 50

int main(void)
{
    char Email[T]; 
    bool Validacao = false; 
    do 
    {
        fgets(Email,sizeof(Email),stdin);  
        
        if((strchr(Email, '@') != NULL) && strstr(Email, "ueg.br")) 
            // Alterar este se quiser outro dominio. Ex aluno@gmail.com 
            break;   
        else
        {
            printf("E-mail inválido. Digite novamente:\n"); 
            fgets(Email,sizeof(Email),stdin);  
        }
        
    }while(Validacao == false); 
    printf("E-mail válido.\n"); 
}
