#include "io.h"

void calcularSequencia(int x, double y, double array[x]) {
    printf("%d =>  1", x);

    for (int i = 1; i <= x; i++) {
        double termo = (1.0/pow(y, i));
        array[i] = termo;
    }

    
}

void gravarnoarquivo(double arranjo[], char *name, int x)
{
    FILE *arquivo = fopen(name, "wt");
    for (int i = 0; i < x; i++)
    {
        fprintf(arquivo, "%d\n", arranjo[i]);
    }

    fclose(arquivo);
}
int main()
{
    int x = 0;
    double y = 0.0;
    printf("Informe um valor inteiro:\n");
    scanf("%i", &x); getchar();
    printf("Informe um valor real:\n");
    scanf("%lf", &y); getchar();
    double array[x];
    gravarnoarquivo(array, "Dados5
    .TXT", x);
    return 0;
}
