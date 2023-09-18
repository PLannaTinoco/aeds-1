#include "io.h"
#include <stdio.h>
int main( )
{
    double primeiroValor, segundoValor;
    int QntdValores, DentrodoIntervalo =0, ForadoIntervalo =0;
    printf("Informe o primeiro valor do intervalo: \n");
    scanf("%lf", &primeiroValor); getchar(  );
    printf("Informe o segundo valor do intervalo: \n");
    scanf("%lf", &segundoValor); getchar(  );
    printf("Infrome a quantidade de valores a serem lidos\n");
    scanf("%i", &QntdValores); getchar();
    for (int i = 0; i < QntdValores; i++)
    {
        double valor;
        printf("Informe o valor %d\n", i+1);
        scanf("%lf", &valor); getchar();
    if (valor>=primeiroValor && valor<=segundoValor)
    {
        printf("%lf esta dentro do intervalo\n", valor);
        DentrodoIntervalo++;
    } else {
        printf("%lf esta fora do intervalo\n", valor);
        ForadoIntervalo++;
    }
    
    }
    printf("Valores Dentro do intervalo: %i\n", DentrodoIntervalo);
    printf("Valores Fora do intervalo: %i\n", ForadoIntervalo);
    
//encerrar
printf("Aperte Enter para encerrar\n"); getchar();
    return 0;
}
