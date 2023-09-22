#include "io.h"
int main()
{
    int x, y;
    printf("Informe o numero : \n");
    scanf("%i", &x); getchar();
    y=x;
    double z;
    do
    {
        z = pow(x,y);
        printf("%i: %2.lf\n", y, z);
        y--;
    } while (y != 0);
    
    //encerrar 
    printf("Aperte enter para finalizar o codigo\n");
    getchar();


    return 0;
}