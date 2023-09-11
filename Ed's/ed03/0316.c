#include <stdio.h>
#include <string.h>

int main() {
    printf("Digite uma cadeia de caracteres: ");

    char cadeia[100]; // Assumindo que a cadeia terá no máximo 100 caracteres
    scanf("%s", cadeia);

    int contador = 0;
    int i;

    printf("Caracteres que não são digitos nem letras: ");
    
    for (i = 0; cadeia[i] != '\0'; i++) {
        if (!((cadeia[i] >= '0' && cadeia[i] <= '9') || 
              (cadeia[i] >= 'A' && cadeia[i] <= 'Z') || 
              (cadeia[i] >= 'a' && cadeia[i] <= 'z'))) {
            contador++;
            printf("%c ", cadeia[i]);
        }
    }

    printf("\nTotal de caracteres que nao sao digitos nem letras: %d\n", contador);

    return 0;
}
