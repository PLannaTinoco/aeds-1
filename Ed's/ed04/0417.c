#include "io.h"
int main()
{
    int contador = 0;
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores);
    getchar();
    int tamanho = strlen(valores);
   for (int i = 0; i < tamanho; i++)
    {
        if (valores[i] >= '0' && valores[i] <= '9' && (valores[i] - '0') % 2 != 0)
        {
           contador++;
            
        }
        
    }
    printf("ha %i numeros impares\n", contador);
    
    // encerrar
    printf("Aperte Enter para encerrar\n");
    getchar();

    return 0;
}
