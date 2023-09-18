#include "io.h"
int mostrarLetra(char *cadeia)
{
    int contador = 0;
    int tamanho = strlen(cadeia);
    for (int i = 0; i < tamanho; i++)
    {
        if (cadeia[i] > 'K' && cadeia[i] <= 'Z')
        {
            printf("%c e Maiscula e maior que K\n", cadeia[i]);
        }
        else if (cadeia[i] > 'k' && cadeia[i] <= 'z')
        {
            printf("%c e Minuscula e maior que K\n", cadeia[i]);
        }
    }
    return (contador);
}

int main()
{
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores);
    getchar();
    mostrarLetra(valores);

    // encerrar
    printf("Aperte Enter para encerrar\n");
    getchar();

    return 0;
}
