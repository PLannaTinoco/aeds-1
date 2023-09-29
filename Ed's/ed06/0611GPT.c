/*Codigo feito pelo GPT com o intuito de estudar a funcionalidade da recursividade*/

#include "io.h"
void imprimirNPares(int n, int atual) {
    if (n <= 0) {
        return;
    }
    
    // Imprime o número atual se ele é par ou 7
    if (atual % 2 == 0 || atual == 7) {
        printf("%d\n", atual);
        imprimirNPares(n - 1, atual + 1);
    } else {
        // Se o número atual não é par e não é 7, chama a função novamente com o próximo número
        imprimirNPares(n, atual + 1);
    }
}

int main()
{
    int x;
    printf("Informe um numero inteiro\n");
    scanf("%i", &x); getchar();
    imprimirNPares(x, 7);
    return 0;
}
