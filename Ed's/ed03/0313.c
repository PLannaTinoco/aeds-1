#include <stdio.h>
#include <string.h> // Precisamos da função strlen para obter o tamanho da palavra

int main() {
    printf("Digite uma palavra: ");

    char palavra[100]; // Assumindo que a palavra terá no máximo 100 caracteres
    scanf("%s", palavra); getchar();

    int tamanho = strlen(palavra); // Obtém o tamanho da palavra

    printf("Letras maiúsculas na palavra (do final para o início): ");
    
    int i;
    int contador = 1;

    for (i = tamanho - 1; i >= 0; i--) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            printf("%i.%c ",contador++, palavra[i]);
        }
    }

    printf("\n");

    return 0;
}

