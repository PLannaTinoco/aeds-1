#include "io.h"
int main()
{
    double x = 1, y = 6, soma = 0, resultado = 0;
    printf("Informe a quantidade de valores a serem somados: \n");
    scanf("%lf", &x); getchar();
   for (int i = 0; i < x; i++)
   {
      soma = soma + (1.0/y);
        y = y + x;
        
   
   }
   printf("=%lf\n", soma);
    return 0;
}
