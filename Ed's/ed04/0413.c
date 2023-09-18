#include "io.h"
int contarLetra(char *cadeia){
    int contador = 0;
    int tamanho = strlen(cadeia);
     for (int i = 0; i < tamanho; i++)
    {
        if (cadeia[i] > 'K' && cadeia[i] <= 'Z')
        {
            
            contador++;
        }
        
    }
    return(contador);
}

int main()
{
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores); getchar();
    int contador = contarLetra(valores);
    printf("ha %i letras maiusculas\n", contador);
    //encerrar
    printf("Aperte Enter para encerrar\n"); getchar();
   
    return 0;
}
