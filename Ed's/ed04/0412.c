#include "io.h"
#include <stdio.h>
int main()
{
    int contador = 0;
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores); getchar();
    int tamanho = strlen(valores);
    for (int i = 0; i < tamanho; i++)
    {
        if (valores[i] > 'K' && valores[i] <= 'Z')
        {
            printf("%c e Maiscula e maior que K\n", valores[i]);
            contador++;
        }
        
    }
    printf(" Contador: %i\n", contador);
    //encerrar
    printf("Aperte Enter para encerrar\n"); getchar();
    return 0;
}
