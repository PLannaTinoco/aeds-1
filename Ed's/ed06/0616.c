#include "io.h"

double soma_pares_F6(int x, int y){
        
  if (x==0)
  {
    
    return 0;
  }
    if (y%2==0 || y == 7)
    {
       printf("1/%i\n", y);
        return 1.0/y + soma_pares_F6(x-1, y+1);
    } else return soma_pares_F6(x, y+1);
    
   
    
}

int main()
{
    int x = 0;
    printf("Informe um valor inteiro: ");
    scanf("%i", &x); getchar();
    double somatorio = soma_pares_F6(x, 7);
    printf("%lf\n",somatorio);
    return 0;
}
