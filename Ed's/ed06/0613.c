#include "io.h"
void multiplode7_F3(int x, int y){
    if (x == 0)
    {
        return;
    }
       printf("%i\n",y);
        multiplode7_F3(x-1, y+7);
    
}

int main()
{
    int x = 0;
    printf("Informe um valor inteiro\n");
    scanf("%i", &x); getchar();
    multiplode7_F3(x, 1);    

    return 0;
}
