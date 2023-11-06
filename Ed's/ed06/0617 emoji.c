#include "io.h"
char lerCaracteres_F7(char* x, int y){
    if (y>0)
    {
        printf("%c\n", lerCaracteres_F7(x, y-1));
    }else return 49; //ALTERAR O VALOR DO RETURN MUDA O CARACTERE
    



}

int main()
{
    char x[80];
    printf("informe uma cadeia de caracteres\n");
    scanf("%s", x); getchar();
    lerCaracteres_F7(x, strlen(x));
    return 0;
}
