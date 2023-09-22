#include "io.h"
int main()
{
    int x, y, w = 1;
    printf("Informe o numero : \n");
    scanf("%i", &y); getchar();
    printf("Informe o valor de X : \n");
    scanf("%i", &x); getchar();
    
    double z;
    for (int i = 0; i < y; i++)
    {
        z = pow(x,w);
        printf("%i: 1/%2.lf\n", w, z);
        w=w+2;
        
    }
    
    
    
    
    //encerrar 
    printf("Aperte enter para finalizar o codigo\n");
    getchar();


    return 0;
}