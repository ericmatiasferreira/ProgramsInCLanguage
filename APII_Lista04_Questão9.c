/*

Eric Matias Ferreira Dias 
Universidade Estadual De Goias 
Sistemas De Informaçao 
Disciplina de algoritmos e programaçao II
4 peridodo

*/



#include <stdio.h>

int main() {
    char minhaString[100];
    char caractereRemovido;

    printf("Digite uma string: ");
    fgets(minhaString, sizeof(minhaString), stdin); 

    printf("Digite o caractere a ser removido: ");
    scanf(" %c", &caractereRemovido);

    int i, j = 0;

    for (i = 0; minhaString[i] != '\0'; i++) {
        if (minhaString[i] != caractereRemovido) {
            minhaString[j++] = minhaString[i];
        }
    }
    minhaString[j] = '\0';

    printf("String modificada: %s\n", minhaString);

    return 0;
}
