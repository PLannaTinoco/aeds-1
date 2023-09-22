#include "io.h"
int main()
{
    int x, y = 3, z = 0;
    printf("Informe a quantidade de valores a aserem somados: \n");
    scanf("%i", &x); getchar();
    while (x>0)
    {
        if (y % 7 ==0 && y % 5 != 0)
        {
            printf("1/%i +", y);
            z += y;
            x--;
        }
        y++;
    }
    printf("= 1/%i\n", z);
    //encerrar 
    printf("Aperte enter para finalizar o codigo\n");
    getchar();
    return 0;
}