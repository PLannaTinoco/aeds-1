#include <stdio.h>

int main() {
    double a, b;

    // Ler os valores de a e b, garantindo que estejam no intervalo (0, 1)
    do {
        printf("Digite o valor de a (0 < a < 1): ");
        scanf("%lf", &a);
    } while (a <= 0 || a >= 1);

    do {
        printf("Digite o valor de b (0 < b < 1): ");
        scanf("%lf", &b);
    } while (b <= 0 || b >= 1);

    int n;

    // Ler a quantidade de valores a serem testados
    printf("Digite a quantidade de valores a serem testados (n): ");
    scanf("%d", &n);

    double x;
    int contador = 0;

    printf("Digite os valores a serem testados:\n");

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &x);

        // Obter a parte fracionária de x
        double parteFracionaria = x - (int)x;

        // Verificar se a parte fracionária de x está fora do intervalo (a, b)
        if (parteFracionaria < a || parteFracionaria > b) {
            contador++;
            printf("%.2lf está fora do intervalo (%.2lf:%.2lf) para sua parte fracionária.\n", x, a, b);
        }
    }

    printf("Total de valores fora do intervalo (%.2lf:%.2lf) para a parte fracionária: %d\n", a, b, contador);

    return 0;
}
