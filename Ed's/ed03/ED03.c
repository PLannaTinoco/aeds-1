/*
 Exemplo0300 - v0.0. - __ / __ / _____
 Author: Pedro Ti
*/
// dependencias
#include "io.h" // para definicoes proprias
/**
 Method_00 - nao faz nada.
*/
void method_00 ( void )
{
// nao faz nada
} // end method_00 ( )
/**
 Method_01 - Repeticao com teste no inicio.
*/
void method_01 ( void )
{
   printf("Digite uma palavra: ");

    char palavra[100]; // Assumindo que a palavra terá no máximo 100 caracteres
    scanf("%s", palavra);

    printf("Letras maiusculas na palavra: ");
    
    int i = 0;

    while (palavra[i] != '\0') {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            printf("%c ", palavra[i]);
        }
        i++;
    }

    printf("\n");

    
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )
/*
 Funcao principal.
 @return codigo de encerramento
*/
/** 
   Method_02 - Repeticao com teste no inicio. 
 */ 
void method_02 ( void ) 
{ 
 // definir dado 
    int x = 0; 
    int y = 0; 
 
 // identificar 
    IO_id ( "Method_02 - v0.0" ); 
 
     printf("Digite uma palavra: ");

    char palavra[100]; // Assumindo que a palavra terá no máximo 100 caracteres
    scanf("%s", palavra);

    printf("Letras minusculas na palavra: ");
    int contador = 0;
    int i = 0;

    while (palavra[i] != '\0') {
        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
            printf("%c ", palavra[i]);
            contador++;
        }
        i++;
    }

    printf("%d\n", contador);
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_02 ( )
/** 
   Method_03 - Repeticao com teste no inicio. 
 */ 
void method_03 ( void ) 
{ 
 
 
 // identificar 
    IO_id ( "Method_03 - v0.0" ); 
 
 
    printf("Digite uma palavra: ");

    char palavra[100]; // Assumindo que a palavra terá no máximo 100 caracteres
    scanf("%s", palavra); getchar();

    int tamanho = strlen(palavra); // Obtém o tamanho da palavra

    printf("Letras maiúsculas na palavra (do final para o início): ");
    
    int i;
    int contador = 1;

    for (i = tamanho - 1; i >= 0; i--) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            printf("%i.%c ",contador++, palavra[i]);
        }
    }

    printf("\n");
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_03 ( )
/** 
   Method_04 - Repeticao com teste no inicio e variacao. 
 */ 
void method_04 ( void ) 
{ 

 
 // identificar 
    IO_id ( "Method_04 - v0.0" ); 
 
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
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_04 ( )
/** 
   Method_05 - Repeticao com teste no inicio e variacao. 
 */ 
void method_05 ( void ) 
{ 
 
 
 // identificar 
    IO_id ( "Method_05 - v0.0" ); 
 
printf("Digite uma cadeia de caracteres: ");

    char cadeia[100]; // Assumindo que a cadeia terá no máximo 100 caracteres
    scanf("%s", cadeia);

    int contador = 0;
    int i;

    for (i = strlen(cadeia) - 1; i >= 0; i--) {
        if (cadeia[i] >= '0' && cadeia[i] <= '9') {
            contador++;
            printf("%c ", cadeia[i]);
        }
    }

    printf("\nTotal de dígitos na cadeia: %d\n", contador);
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_05 ( )   
/** 
   Method_06 - Repeticao sobre cadeia de caracateres. 
 */ 
void method_06 ( void ) 
{ 

  
 
 // identificar 
    IO_id ( "Method_06 - v0.0" ); 
 
    printf("Digite uma cadeia de caracteres: ");

    char cadeia[100]; // Assumindo que a cadeia terá no máximo 100 caracteres
    scanf("%s", cadeia);

    int contador = 0;
    int i;

    printf("Caracteres que não são digitos nem letras: ");
    
    for (i = 0; cadeia[i] != '\0'; i++) {
        if (!((cadeia[i] >= '0' && cadeia[i] <= '9') || 
              (cadeia[i] >= 'A' && cadeia[i] <= 'Z') || 
              (cadeia[i] >= 'a' && cadeia[i] <= 'z'))) {
            contador++;
            printf("%c ", cadeia[i]);
        }
    }

    printf("\nTotal de caracteres que nao sao digitos nem letras: %d\n", contador);

 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_06 ( ) 
/** 
   Method_07 - Repeticao sobre cadeia de caracateres. 
 */ 
void method_07 ( void ) 
{ 
 
 
 // identificar 
    IO_id ( "Method07 - v0.0" ); 
 
    int a, b, n;

    // Ler os valores de a, b e n
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite a quantidade de valores a serem testados (n): ");
    scanf("%d", &n);

    int contador = 0;
    int i, x;

    printf("Digite os valores a serem testados:\n");

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x);

        if (x >= a && x <= b && x % 5 == 0) {
            contador++;
        }
    }

    printf("Total de valores múltiplos de 5 no intervalo [%d:%d]: %d\n", a, b, contador);

 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_07 ( ) 
/** 
   Method_08 - Repeticao com intervalos. 
 */ 
void method_08 ( void ) 
{ 

 // identificar 
    IO_id ( "Method08 - v0.0" ); 
 
  int a, b, n;

    // Ler os valores de a, b e n
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite a quantidade de valores a serem testados (n): ");
    scanf("%d", &n);

    int contador = 0;
    int i, x;

    printf("Digite os valores a serem testados:\n");

    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &x);

        if (x >= a && x <= b && x % 3 == 0 && x % 5 != 0) {
            contador++;
        }
    }

    printf("Total de valores múltiplos de 3, não múltiplos de 5, no intervalo [%d:%d]: %d\n", a, b, contador);

 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_08 
/** 
   Method_09 - Repeticao com intervalos. 
 */ 
void method_09 ( void ) 
{ 
 
 
 // identificar 
    IO_id ( "Method_09 - v0.0" ); 
 
 double a, b;
    
    // Ler os valores de a e b
    do {
        printf("Digite o valor de a (menor que b): ");
        scanf("%lf", &a);
        printf("Digite o valor de b: ");
        scanf("%lf", &b);
    } while (a >= b); // Garante que a < b

    int n;
    
    // Ler a quantidade de valores a serem testados
    printf("Digite a quantidade de valores a serem testados (n): ");
    scanf("%d", &n);

    double x;
    int contador = 0;

    printf("Digite os valores a serem testados:\n");

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &x);

        // Verificar se x está no intervalo (a:b) e se a parte inteira de x é ímpar
        if (x > a && x < b && ((int)x % 2 != 0)) {
            contador++;
            printf("%.2lf está no intervalo (%.2lf:%.2lf) e sua parte inteira é ímpar.\n", x, a, b);
        }
    }

    printf("Total de valores no intervalo (%.2lf:%.2lf) com parte inteira ímpar: %d\n", a, b, contador);

 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_09 ( ) 
/** 
   Method_10 - Repeticao com confirmacao. 
 */ 
void method_10 ( void ) 
{ 

 
 // identificar 
    IO_id ( "Method10 - v0.0" ); 
 
     double a, b;

    // Ler os valores de a e b, garantindo que estejam no intervalo (0, 1)
    do {
        printf("Digite o valor de a (0 < a < 1): ");
        scanf("%lf", &a);
    } while (a <= 0 || a >= 1);

    do {
        printf("Digite o valor de b (0 < b < 1): ");
        scanf("%lf", &b);
    } while (b <= 0 || b >= 1);

    int n;

    // Ler a quantidade de valores a serem testados
    printf("Digite a quantidade de valores a serem testados (n): ");
    scanf("%d", &n);

    double x;
    int contador = 0;

    printf("Digite os valores a serem testados:\n");

    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &x);

        // Obter a parte fracionária de x
        double parteFracionaria = x - (int)x;

        // Verificar se a parte fracionária de x está fora do intervalo (a, b)
        if (parteFracionaria < a || parteFracionaria > b) {
            contador++;
            printf("%.2lf está fora do intervalo (%.2lf:%.2lf) para sua parte fracionária.\n", x, a, b);
        }
    }

    printf("Total de valores fora do intervalo (%.2lf:%.2lf) para a parte fracionária: %d\n", a, b, contador);

 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_10 ( ) 
int main ( )
{
// definir dado
 int x = 0;
// repetir até desejar parar
 do
 {
 // identificar
 IO_id ( "EXEMPLO0300 - Programa - v0.0" );
 // ler do teclado
 IO_println ( "Opcoes" );
 IO_println ( "0 - parar" );
 IO_println ( "1 - Method_01" );
 IO_println ( "2 - Method_02" );
 IO_println ( "3 - Method_03" );
 IO_println ( "4 - Method_04" );
 IO_println ( "5 - Method_05" );
 IO_println ( "6 - Method_06" );
 IO_println ( "7 - Method_07" );
 IO_println ( "8 - Method_08" );
 IO_println ( "9 - Method_09" );
 IO_println ( "10 - Method_10" );
 IO_println ( "" );
 x = IO_readint ( "Entrar com uma opcao: " );
 // testar valor
 switch ( x )
 {
 case 0: method_00 ( ); break;
 case 1: method_01 ( ); break;
 case 2: method_02 ( ); break;
 case 3: method_03 ( ); break;
 case 4 : method_04 ( ); break;
 case 5 : method_05 ( ); break;
 case 6 : method_06 ( ); break;
 case 7 : method_07 ( ); break;
 case 8 : method_08 ( ); break;
 case 9 : method_09 ( ); break;
 case 10 : method_10 ( ); break;
 default:
 IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1] (",
 IO_concat ( IO_toString_d ( x ), ")" ) ) );
 } // end switch
 }
 while ( x != 0 );
// encerrar
 IO_pause ( "Apertar ENTER para terminar" );
 return ( 0 );
} // end main ( )
