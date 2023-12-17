#include "io.h"

void imparmultiplode7(int x, int y, int array[x])
{
    x = x - 1;
    while (x >= 0)
    {

        if (y % 7 == 0 && y % 2 != 0)
        {
            array[x] = y;
            y = y + 7;
            x = x - 1;
        }
        y = y + 7;
    }
}

void gravarnoarquivo(int arranjo[], char *name, int x)
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
    int array[x];
    imparmultiplode7(x, 21, array);
    gravarnoarquivo(array, "Dados2.TXT", x);
    return 0;
}
