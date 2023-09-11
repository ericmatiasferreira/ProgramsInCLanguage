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

#define T 50

int main(void)
{
    char Email[T];
    int Cumbuca = 0;

    while (Cumbuca == 0)
    {
        printf("Digite um e-mail: ");
        fgets(Email, sizeof(Email), stdin);

        // Remova o caractere de nova linha (se presente) da entrada do usuário
        size_t len = strlen(Email);
        if (len > 0 && Email[len - 1] == '\n')
        {
            Email[len - 1] = '\0';
        }

        if (strchr(Email, '@') != NULL)
        {
            Cumbuca = 1;
        }

        printf(Cumbuca == 1 ? "E-mail válido.\n" : "E-mail inválido. Digite novamente.\n");
    }

    return 0;
}

