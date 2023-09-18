#include <stdio.h>

void mostrarSimbolosAlfanumericos(char *sequencia) {
    int i = 0;
    while (sequencia[i] != '\0') {
        // Verifica se é um caractere alfanumérico
        if ((sequencia[i] >= 'a' && sequencia[i] <= 'z') ||
            (sequencia[i] >= 'A' && sequencia[i] <= 'Z') ||
            (sequencia[i] >= '0' && sequencia[i] <= '9')) {
            printf("%c ", sequencia[i]);
        }
        i++;
    }
    printf("\n");
}

int main() {
    char sequencia[100];

    printf("Informe uma sequencia de caracteres: \n");
    fgets(sequencia, sizeof(sequencia), stdin);

    printf("Simbolos alfanumericos na sequencia: ");
    mostrarSimbolosAlfanumericos(sequencia);
    // encerrar
    printf("Aperte Enter para encerrar\n");
    getchar();

    return 0;
}
