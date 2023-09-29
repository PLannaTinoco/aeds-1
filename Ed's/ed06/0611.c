#include "io.h"
void mostrarPares(int x, int y ) // entrada do valor X é o contador, e a entrada do Y é pré definido para mostrar os valores
{
    
    if (x > 0) //contador da chamada da função 
    {

        if (y % 2 == 0)
        {
            printf("%i\n", y); //printa os valores do Y
            
            mostrarPares(x-1, y+2); //chamada da função alterando os valores da congtagem e aumentando em 2 os valores de Y paroa manter os numeros pares
        }else{
            
            mostrarPares(x, y+1);} //chamada da função aumentando o valor de Y sem alterar o valor da contagem

    }
    return ;
}
int main()
{
    int x = 0;
    printf("Informe um valor inteiro\n");
    scanf("%i", &x); getchar();
    mostrarPares(x, 7);

    return 0;
}
