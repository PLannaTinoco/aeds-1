#include <stdio.h>

int main() {
    double a, b;
    
    // Ler os valores de a e b
    do {
        printf("Digite o valor de a (menor que b): ");
        scanf("%lf", &a);
        printf("Digite o valor de b: ");
        scanf("%lf", &b);
    } while (a >= b); // Garante que a < b

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

        // Verificar se x está no intervalo (a:b) e se a parte inteira de x é ímpar
        if (x > a && x < b && ((int)x % 2 != 0)) {
            contador++;
            printf("%.2lf está no intervalo (%.2lf:%.2lf) e sua parte inteira é ímpar.\n", x, a, b);
        }
    }

    printf("Total de valores no intervalo (%.2lf:%.2lf) com parte inteira ímpar: %d\n", a, b, contador);

    return 0;
}
