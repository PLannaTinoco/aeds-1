#include "io.h"
int main()
{
    int x = 1, y = 7, soma = 0, resultado = 0;
    printf("Informe a quantidade de valores a serem somados: \n");
    scanf("%i", &x); getchar();
   for (int i = 0; i < x; i++)
   {
     soma += y + i;
    resultado += soma;
    printf(" %i + ", soma);
   }
   printf("=%i\n", resultado);
    return 0;
}
