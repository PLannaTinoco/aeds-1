#include "io.h"
char lerCaracteres_F7(char* x, int y){
    if (y>=0)
    {
        lerCaracteres_F7(x,y-1);
        printf("%c\n", x[y]);
    } 
    



}

int main()
{
    char x[80];
    printf("informe uma cadeia de caracteres\n");
    scanf("%s", &x); getchar();
    lerCaracteres_F7(x, strlen(x));
    return 0;
}
