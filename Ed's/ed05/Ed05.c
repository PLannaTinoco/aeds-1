/*
 Exemplo0500 - v0.0. - __ / __ / _____
 Author: Pedro Tinoco Lanna - 803103
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
    int x, y;
    printf("Informe o numero de multiplos de 7 deseja: \n");
    scanf("%i", &x); getchar();
    for (int y = 1; y <= x; y++)
    {
        printf("%i: %i\n", y, (y*7));
    }
    

    
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
 
     int x, y = 0, z = 1;
    printf("Informe o numero de multiplos de 7 deseja: \n");
    scanf("%i", &x); getchar();
    do
    {
        if ((z*4)%3 == 0)
        {
            printf("%i: %i\n",z,(z*4));
            y++;
        }
        z++;
    } while (y != x);
 
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
 
 
    int x, y;
    printf("Informe o numero : \n");
    scanf("%i", &x); getchar();
    y=x;
    double z;
    do
    {
        z = pow(x,y);
        printf("%i: %2.lf\n", y, z);
        y--;
    } while (y != 0);
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
 
      int x, y;
    printf("Informe o numero de multiplos de 7 deseja: \n");
    scanf("%i", &x); getchar();
    for (int y = 1; y <= x; y++)
    {
        printf("%i: 1/%i\n", y, (y*7));
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
 
int x, y, w = 1;
    printf("Informe o numero : \n");
    scanf("%i", &y); getchar();
    printf("Informe o valor de X : \n");
    scanf("%i", &x); getchar();
    
    double z;
    for (int i = 0; i < y; i++)
    {
        z = pow(x,w);
        printf("%i: 1/%2.lf\n", w, z);
        w=w+2;
        
    }
 
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
 
   int x, y = 3, z = 0;
    printf("Informe a quantidade de valores a aserem somados: \n");
    scanf("%i", &x); getchar();
    while (x>0)
    {
        if (y % 3 ==0 && y % 4 != 0)
        {
            printf("%i +", y);
            z += y;
            x--;
        }
        y++;
    }
    printf("= %i\n", z);
 
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
 
    int x, y = 3, z = 0;
    printf("Informe a quantidade de valores a aserem somados: \n");
    scanf("%i", &x); getchar();
    while (x>0)
    {
        if (y % 7 ==0 && y % 5 != 0)
        {
            printf("1/%i +", y);
            z += y;
            x--;
        }
        y++;
    }
    printf("= 1/%i\n", z);
 
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
 
  int x = 1, y = 7, soma = 0, resultado = 0;
    printf("Informe a quantidade de valores a serem somados: \n");
    scanf("%i", &x); getchar();
   for (int i = 0; i < x; i++)
   {
     soma += y + i;
    resultado += soma;
    printf(" %i + ", soma);
   }
   printf("=%i\n", resultado);
 
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
 
int x = 1, y = 7, soma = 0;
    double aux = 0;
    printf("Informe a quantidade de valores a serem somados: \n");
    scanf("%i", &x); getchar();
   for (int i = 0; i < x; i++)
   {
      aux = pow(y, 2);
    
     soma += aux ;
    
    printf(" %2.lf + ", aux);
    y++;
   }
   printf("=%i\n", soma);
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
 
    double x = 1, y = 6, soma = 0, resultado = 0;
    printf("Informe a quantidade de valores a serem somados: \n");
    scanf("%lf", &x); getchar();
   for (int i = 0; i < x; i++)
   {
      soma = soma + (1.0/y);
        y = y + x;
        
   
   }
   printf("=%lf\n", soma);
 
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
