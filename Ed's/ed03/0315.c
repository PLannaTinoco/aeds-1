#include <stdio.h>
#include <string.h>

int main() {
    printf("Digite uma cadeia de caracteres: ");

    char cadeia[100]; // Assumindo que a cadeia terá no máximo 100 caracteres
    scanf("%s", cadeia);

    int contador = 0;
    int i;

    for (i = strlen(cadeia) - 1; i >= 0; i--) {
        if (cadeia[i] >= '0' && cadeia[i] <= '9') {
            contador++;
            printf("%c ", cadeia[i]);
        }
    }

    printf("\nTotal de dígitos na cadeia: %d\n", contador);

    return 0;
}
