#include "io.h"
int main()
{
    int x, y = 3, z = 0;
    printf("Informe a quantidade de valores a aserem somados: \n");
    scanf("%i", &x); getchar();
    while (x>0)
    {
        if (y % 3 ==0 && y % 4 != 0)
        {
            printf("%i +", y);
            z += y;
            x--;
        }
        y++;
    }
    printf("= %i\n", z);
    //encerrar 
    printf("Aperte enter para finalizar o codigo\n");
    getchar();
    return 0;
}