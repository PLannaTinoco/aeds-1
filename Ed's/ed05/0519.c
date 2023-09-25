#include "io.h" 
int main()
{
    int x = 1, y = 7, soma = 0;
    double aux = 0;
    printf("Informe a quantidade de valores a serem somados: \n");
    scanf("%i", &x); getchar();
   for (int i = 0; i < x; i++)
   {
      aux = pow(y, 2);
    
     soma += aux ;
    
    printf(" %2.lf + ", aux);
    y++;
   }
   printf("=%i\n", soma);
    
    return 0;
}
