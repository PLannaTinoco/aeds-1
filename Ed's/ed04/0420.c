#include <stdio.h>

void contarEExibirAlfanumericos(char *palavra, int *totalAlfanumericos) {
    int contador = 0;
    int i = 0;

    while (palavra[i] != '\0') {
        if ((palavra[i] >= 'a' && palavra[i] <= 'z') ||
            (palavra[i] >= 'A' && palavra[i] <= 'Z') ||
            (palavra[i] >= '0' && palavra[i] <= '9')) {
            printf("%c", palavra[i]);
            contador++;
        }
        i++;
    }

    *totalAlfanumericos += contador; // Acumula o total de alfanuméricos
    printf(" - Quantidade de alfanuméricos: %d\n", contador);
}

int main() {
    int totalAlfanumericos = 0;
    int quantidadePalavras;

    printf("Informe a quantidade de palavras: ");
    scanf("%d", &quantidadePalavras);
    getchar(); // Limpar o buffer de entrada

    for (int i = 0; i < quantidadePalavras; i++) {
        char palavra[100];

        printf("Informe a palavra %d: ", i + 1);
        fgets(palavra, sizeof(palavra), stdin);

        printf("Simbolos alfanumericos na palavra %d: ", i + 1);
        contarEExibirAlfanumericos(palavra, &totalAlfanumericos);
    }

    printf("Total de simbolos alfanumericos em todas as palavras: %d\n", totalAlfanumericos);

    return 0;
}
