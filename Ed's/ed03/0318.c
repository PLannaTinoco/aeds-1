#include <stdio.h>

int main() {
    int a, b, n;

    // Ler os valores de a, b e n
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite a quantidade de valores a serem testados (n): ");
    scanf("%d", &n);

    int contador = 0;
    int i, x;

    printf("Digite os valores a serem testados:\n");

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x);

        if (x >= a && x <= b && x % 3 == 0 && x % 5 != 0) {
            contador++;
        }
    }

    printf("Total de valores múltiplos de 3, não múltiplos de 5, no intervalo [%d:%d]: %d\n", a, b, contador);

    return 0;
}
