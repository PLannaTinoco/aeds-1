#include "io.h"
void potenciade7(int x, int array[x]){
int potencia = 1;

for (int i = 0; i < x; i++)
{
    potencia = potencia * 7;
    printf("%i\n", potencia);
    array[i] = potencia;
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
    scanf("%i", &x); getchar();
    int array[x]; 
    potenciade7(x, array);
    gravarnoarquivo(array, "Dados3.TXT", x);
    return 0;
}
