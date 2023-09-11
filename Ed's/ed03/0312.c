#include <stdio.h>

int main() {
    printf("Digite uma palavra: ");

    char palavra[100]; // Assumindo que a palavra terá no máximo 100 caracteres
    scanf("%s", palavra);

    printf("Letras minusculas na palavra: ");
    int contador = 0;
    int i = 0;

    while (palavra[i] != '\0') {
        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            printf("%c ", palavra[i]);
            contador++;
        }
        i++;
    }

    printf("%d\n", contador);

    return 0;
}

