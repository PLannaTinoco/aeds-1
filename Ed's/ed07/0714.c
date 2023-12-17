#include "io.h"

void potenciade7(int x, double array[x])
{
    int potencia = 1;

    while (x >= 0)
    {
        potencia = potencia * 7;

        array[x] = 1/potencia;
        
        x = x - 1;
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
    printf("Informe um numero inteiro: \n");
    scanf("%i", &x);
    getchar();
    double array[x];
    potenciade7(x, array);
    gravarnoarquivo(array, "Dados4.TXT", x);
    return 0;
}
