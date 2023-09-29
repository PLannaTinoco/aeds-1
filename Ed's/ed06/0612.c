#include "io.h"
void multiplode7(int x, int y){
    if (x == 0)
    {
        return;
    }
       printf("%i\n",y);
        multiplode7(x-1, y-7);
    
}

int main()
{
    int x = 0;
    printf("Informe um valor inteiro\n");
    scanf("%i", &x); getchar();
    multiplode7(x, x*7);    

    return 0;
}
