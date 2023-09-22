#include "io.h"
int main()
{
    int x, y = 0, z = 1;
    printf("Informe o numero de multiplos de 7 deseja: \n");
    scanf("%i", &x); getchar();
    do
    {
        if ((z*4)%3 == 0)
        {
            printf("%i: %i\n",z,(z*4));
            y++;
        }
        z++;
    } while (y != x);
    //encerrar 
    printf("Aperte enter para finalizar o codigo\n");
    getchar();
    return 0;
}
