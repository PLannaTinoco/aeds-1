#include <stdio.h>
#include <stdlib.h>

typedef struct s_intArray
{
    int tamanho;
    int *dados;
    int p;
} Array;

int main ( )
{
    Array arranjo;

    printf("\n%s", "Tamanho do arranjo = ");
    scanf("%d", arranjo.tamanho );

    arranjo.dados = (int*) malloc( arranjo.tamanho * sizeof( int ) );

    for( arranjo.p = 0; arranjo.p < arranjo.tamanho; arranjo.p++ )
    {
        printf("\n%s", "Valor = ");
        scanf("%d", &arranjo.dados[arranjo.p] );
    }

    for( arranjo.p = 0; arranjo.p < arranjo.tamanho; arranjo.p++ )
    {
        printf("%d", arranjo.dados[arranjo.p] );
    }

}