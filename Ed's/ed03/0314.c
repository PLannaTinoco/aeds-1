#include <stdio.h>
#include <string.h> // Precisamos da função strlen para obter o tamanho da palavra

int main() {
    printf("Digite uma palavra: ");

    char palavra[100]; // Assumindo que a palavra terá no máximo 100 caracteres
    scanf("%s", palavra); getchar();
    int i = 0;
    
    while (palavra[i] !='\0')
    {
        if (palavra[i]>='A' && palavra[i]<='Z')
        {
            printf("%i.%c e maiuscula\n",i+1, palavra[i]);
        } else if (palavra[i]>='a' && palavra[i]<='z'){
            printf("%i.%c e minuscula\n",i+1, palavra[i]);
        }
        i++;
    }
    
    
    

    return 0;
}

