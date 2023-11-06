#include "io.h"
int soma_impares_F5(int x, int y){
        
  if (x==0)
  {
    return 0;
  }
    if (y%2!=0)
    {
       
        return y + soma_impares_F5(x-1, y+1);
    } else soma_impares_F5(x, y+1);
    
  
   
  
    
}

int main()
{
    int x = 0;
    printf("Informe um valor inteiro: ");
    scanf("%i", &x); getchar();
    int somatorio = soma_impares_F5(x, 7);
    printf("%i\n",somatorio);
    return 0;
}
