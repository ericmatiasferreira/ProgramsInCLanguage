/*   

Desenvolvido por Eric Matias Ferreira Dias. 
Universidade Estadual De Goias 
Sistemas De Informacao 
Disciplina de algoritmos e programaçao II 
4 Periodo. 
Agradecimento para Fortran Crusaders




10 - PIX é o meio de pagamento eletrônico instantâneo, gratuito e com segurança, do
Brasil. Para realizar pagamento, transferência ou saque via PIX, é necessário
selecionar o tipo de Chave que pode ser: CPF, CNPJ, Celular ou e-mail e informar o
valor.


Desenvolva um programa que leia o tipo e a chave PIX, realize a validação e imprima
a mensagem de erro se a chave não obedecer os critérios de validação do tipo de
chave escolhida.


Os critérios de validação de cada tipo de chave são:

CPF a chave deve conter 11 dígitos numéricos
Mensagem de erro: CPF Inválido!

CNPJ a chave deve conter 14 dígitos numéricos
Mensagem de erro: CNPJ Inválido!

Celular - a chave deve conter 11 dígitos numéricos
Mensagem de erro: Quantidade de dígitos p/ telefone inválida.

e-mail: formato de e-mail inválido, ou seja, deve conter um @ e deve ter pelos um
caracter antes e um caracter depois do @

Mensagem de erro: Formato de e-mail inválido.

Se a chave PIX estiver correta o programa deve solicitar para o usuário digitar o valor
a ser transferido e imprimir a mensagem: PIX realizado com sucesso!

Dica:Na biblioteca ctype tem a isdigit() que avalia se o caracter representa um
dígito numérico.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

//#define TAMANHO_CPF_E_CELULAR 11 // NUMERICO 
//#define TAMANHO_CNPJ 14 // MUMERICO 

int main (void)
{

    int TipoDeChavePix,I,NaoeUmNumero; 
    char ChavePix[15]; 
    bool OpcaoDePresenca = true; 

   


    while(OpcaoDePresenca == true )
    {

        printf("1 - CPF\n"); 
        printf("2 - CNPJ\n"); 
        printf("3 - Celular\n"); 
        printf("4 - e-mail\n"); 
        printf("0 - Sair\n"); 
        printf("Digite o tipo de chave PIX:\n"); 

        scanf("%d",&TipoDeChavePix);
        getchar(); 
        printf("Digite a Chave:"); 
        fgets(ChavePix,sizeof(ChavePix),stdin); 

        if (TipoDeChavePix == 1) // Vai ser por CPF
        {
                do
                {
                    NaoeUmNumero = 0;
                    
                    // Remova os separadores (pontos e traços) do CPF para contar apenas os dígitos numéricos.
                    char cpfLimpo[12]; // 11 dígitos + '\0'
                    int j = 0;
                    for (int i = 0; ChavePix[i] != '\0'; i++)
                    {
                        if (isdigit(ChavePix[i]))
                        {
                            cpfLimpo[j] = ChavePix[i];
                            j++;
                        }
                    }
                    cpfLimpo[j] = '\0';

                    if (strlen(cpfLimpo) != 11)
                    {
                        printf("CPF Inválido! Deve conter 11 dígitos numéricos.\n");
                        fgets(ChavePix, sizeof(ChavePix), stdin);
                    }
                    else
                    {
                        system("clear"); 
                        printf("**********PIX REALIZADO COM SUCESSO!**********\n\n"); 
                        break;;
                    }
                } while (strlen(ChavePix) != 11);
           
         }






            else if(TipoDeChavePix == 2 ) // Entao vai ser por CNPJ !!!!!!!!!!!!!!!!!!! ; 
            {
                do
                {
                    NaoeUmNumero = 0;
                    
                
                    char CNPJLimpo[15]; // 14 dígitos + '\0'
                    int j = 0;

                    for (int i = 0; ChavePix[i] != '\0'; i++)
                    {
                        if (isdigit(ChavePix[i]))
                        {
                            CNPJLimpo[j] = ChavePix[i];
                            j++;
                        }
                    }
                    CNPJLimpo[j] = '\0';

                    if (strlen(CNPJLimpo) != 14)
                    {
                        printf("CNPJ Inválido!.\n");
                        fgets(ChavePix, sizeof(ChavePix), stdin);
                    }

                    else
                    {
                        system("clear"); 
                        printf("**********PIX REALIZADO COM SUCESSO!**********\n\n"); 
                        break;;
                    }
                } while (strlen(ChavePix) != 11);
            }

            else if(TipoDeChavePix == 3 )
            {
                // ENTAO AQUI VAI A SER POR CELULAR MEU REI 
            }
            else if(TipoDeChavePix == 4 )
            {
                // ENTAO AQUI VAI SER POR EMAIL MEU REI. 
            }
            else if(TipoDeChavePix == 0)
            {
                OpcaoDePresenca = false;
                return 0; 
            }
            else
            {
                printf("CHAVE INEXISTENTE ! \n"); 
            }
    }
    

    return 0; 
}
