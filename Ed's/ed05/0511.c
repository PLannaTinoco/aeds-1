#include "io.h"
int main()
{
    int x, y;
    printf("Informe o numero de multiplos de 7 deseja: \n");
    scanf("%i", &x); getchar();
    for (int y = 1; y <= x; y++)
    {
        printf("%i: %i\n", y, (y*7));
    }
    
    //encerrar 
    printf("Aperte enter para finalizar o codigo\n");
    getchar();
    
    return 0;
}
