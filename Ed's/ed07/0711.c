#include "io.h"
void multiplo3impar(int x, int y, int array[])
{
    int i = 0;
    if (x == 0)
    {
        return 0;
    }
    else
    {
        while (x >= 0)
        {

            if (y % 3 == 0 && y % 2 != 0)
            {
                array[i] = y;
                x = x - 1;
                y = y + 3;
                i++;
            }
            else
                y = y + 3;
        }
    }
}
void gravarnoarquivo(int arranjo[], char*name, int x){
 FILE*arquivo = fopen(name, "wt");
for (int i = 0; i < x; i++)
{
    fprintf(arquivo,"%d\n", arranjo[i]);
}

fclose(arquivo);


}
int main()
{
    int x = 0;
    printf("Informe um valor inteiro\n");
    scanf("%i", &x);
    getchar();
    int array[x];
    multiplo3impar(x, 9, array);
    gravarnoarquivo(array, "DADOS1.TXT", x);

    return 0;
}
