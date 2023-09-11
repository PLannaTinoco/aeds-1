#include <stdio.h>

int main() {
    printf("Digite uma palavra: ");

    char palavra[100]; // Assumindo que a palavra terá no máximo 100 caracteres
    scanf("%s", palavra);

    printf("Letras maiusculas na palavra: ");
    
    int i = 0;

    while (palavra[i] != '\0') {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            printf("%c ", palavra[i]);
        }
        i++;
    }

    printf("\n");

    return 0;
}

