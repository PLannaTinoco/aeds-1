/*
 Exemplo0109 - v0.0. - 24 / 08 / 2023
 Author: Pedro Tinoco Lanna
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0109 exemplo0109.c
 Windows: gcc -o exemplo0109 exemplo0109.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0109
 Windows: exemplo0109
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "io.h"
#define PI 3.14159265358979323846
/*
Exercicio Extra 2
*/
void Exercicio_12 (void)
{
  //definir dados
double volume;
  //identificar 
  printf("Execicio extra 2 - Programa - V0.0\n");
  //acao
  printf("Informe o volume da esfera: \n");
  scanf("%lf", &volume); getchar ( );
 volume = (3*volume/4);
 double raio = sqrt((((volume*4)/3)/PI));
 double circunferencia = (2*PI*raio);
 printf("Raio = %lf \nCircunferencia = %lf\n", raio,circunferencia);
 
  //encerrar
    printf ( "\n\nApertar ENTER para continuar." );
 getchar( ); // aguardar por ENTER
}//end exercicio extra 1
/*
Exercicio Extra 1
*/
void Exercicio_11 (void)
{
  //definir dados
double area, raio;
  //identificar 
  printf("Execicio extra 1 - Programa - V0.0\n");
  //acao
  printf("Informe a area da circunferencia: \n");
  scanf("%lf", &area); getchar ( );
 area = area/3;
 raio = sqrt((area/PI));
 printf("Raio = %lf\n", raio);
 
  //encerrar
    printf ( "\n\nApertar ENTER para continuar." );
 getchar( ); // aguardar por ENTER
}//end exercicio extra 1
/**
 Exercicio 10.
*/
void Exercicio_10 ( void )
{
// definir dados
 double raio = 0; 
 double area = 0;
// identificar
 IO_id ( "Exercicio 10 - Programa - v0.0" );
//acao
printf("Informe o raio da esfera: \n");
scanf("%lf", &raio); getchar( );
raio = (raio/8);
area = (4*PI*(pow(raio,2)));
printf("Area da esfera = %lf \n", area);
// encerrar
 IO_pause ( "Apertar ENTER para terminar" );
// chamar Exercicio para pausar
} // end Exercicio_10 ( )

/**
 Exercicio_09.
*/
void Exercicio_09 ( void )
{
// definir dados singulares
double raio = 0;
// identificar
 printf ( "\n%s\n", "Exercicio_09 - Programa - v0.0" );
//acao
printf("Informe o valor do raio do ciruculo: \n");
scanf("%lf", &raio); getchar();
raio = (raio/2);
double area = ((PI*(pow(raio, 2)))/2);
printf("Area do semicurculo = %lf\n", area);
// encerrar
 printf ( "\n\nApertar ENTER para continuar." );
 getchar( ); // aguardar por ENTER
} // end Exercicio_09 ( )
/**
 Exercicio_08.
*/
void Exercicio_08 ( void )
{
// definir dados
double base = 0, altura = 0, lado3 = 0; 
double volume = 0;
// identificar
 printf ( "\n%s\n", "Exercicio_08 - Programa - v0.0" );

//acao
printf("Informe a altura do paralelepipedo: \n");
scanf("%lf", &altura); getchar( );
printf("Informe a comprimento do paralelepipedo: \n");
scanf("%lf", &base); getchar( );
printf("Informe a largura do paralelepipedo: \n");
scanf("%lf", &lado3); getchar( );
volume = ((base/6) * (altura/6) * (lado3/6));
printf("Volume = %lf\n",volume);
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end Exercicio_08 ( )
/**
 Exercicio_07.
*/
void Exercicio_07 ( void )
{
// definir dados
 double lado = 0;
 double volume = 0;
// identificar
 printf ( "\n%s\n", "Exercicio_07 - Programa - v0.0" );
// mostrar valores iniciais e comprimentos das cadeias
printf("Informe um dos lados do cubo: \n");
scanf("%lf", &lado); getchar( );
lado = (lado*7);
volume = pow(lado, 3);
printf("O volume do cubo e: %lf\n",volume);
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end Exercicio_07 ( )
/**
 Exercicio_06.
*/
void Exercicio_06 ( void )
{
// definir dados
double lado = 0;
double altura = 0;
double area = 0;
double perimetro = 0;
// identificar
printf ( "\n%s\n", "Exercicio_06 - Programa - v0.0" );
//acao
printf("Informe um dos lados do triangulo equilatero: \n");
scanf("%lf", &lado); getchar( );
lado = lado*2;
altura = sqrt(pow(lado, 2.0) - pow((lado/2), 2.0));
area = ((lado * altura)/2);
perimetro = (lado*3);
printf("Lado x2 = %lf \n Altura = %lf \n Area = %lf\n perimetro = %lf\n", lado, altura, area, perimetro);

// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end Exercicio_06 ( )

/**
 Exercicio_05.
*/
void Exercicio_05 ( void )
{
// definir dado
int altura = 0;
int lado = 0;
// identificar
 printf ( "\n%s\n", "Exercicio_05 - Programa - v0.0" );
 //acao
 printf("\n Informe a base do triangulo (valor inteiro): ");
scanf("%i", &lado); getchar( );
printf("\n Informe a altura do triangulo (valor inteiro): ");
scanf("%i", &altura); getchar( );
altura = (altura/2);
int area =((altura*lado)/2);
printf("Area do triangulo com metade da altura: %i\n", area);

// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end Exercicio_05 ( )
/**
 Exercicio_04.
*/
void Exercicio_04 ( void )
{
// definir dado
int lado;
int lado2;
// identificar
 printf ( "\n%s\n", "Exercicio 4 - Programa - v0.0" );

// acao
printf("\n Informe um dos lados do quadrado (valor inteiro): ");
scanf("%i", &lado); getchar( );
printf("\n Informe outro lado do quadrado (valor inteiro): ");
scanf("%i", &lado2); getchar( );
lado = lado/5; lado2 = lado2/5;
int perimetro = ((lado+lado2)/2); 
int area = ((lado*lado2)/2);
printf("Area = %i\n perimetro = %i\n",area , perimetro);
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end Exercicio_04 ( )
/**
 Exercicio_03.
*/
void Exercicio_03 ( void )
{
// definir dado
int lado = 0;
int lado2 = 0;
// identificar
 printf ( "\n%s\n", "Exercicio_03 - Programa - v0.0" );

//acao
printf("\n Informe um dos catetos do triangulo (valor inteiro): ");
scanf("%i", &lado); getchar( );
printf("\n Informe outro cateto do triangulo (valor inteiro): ");
scanf("%i", &lado2); getchar( );
int area = ((lado * lado2)/2);
int area4x = (area*4);
printf("Area = %i \n 4xArea = %i\n", area, area4x);

// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end Exercicio_03( )
/**
 Exercicio_02.
*/
void Exercicio_02 ( void )
{
// definir dado
 int lado = 0; 
// OBS.: Definir a parte fracionaria e' util
// identificar
 printf ( "\n%s\n", "Exercicio_02 - Programa - v0.0" );
//acao
printf("Informe o lado de um quadrado (valor inteiro): \n");
scanf("%i", &lado); getchar( );
int area = (lado * lado);
int perimetro = (lado * 4);
printf("Area do quadrado: %i\n", area);
printf("Perimetro do quadrado: %i\n", perimetro);
int ladomenor = (lado/3);
int areamenor = (ladomenor *ladomenor);
int perimetromenor = (ladomenor * 4);
printf("Area * 1/3 = %i\n", areamenor);
printf("perimetro * 1/3 = %i\n", perimetromenor);
// encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end Exercicio_02 ( )

/**
 Exercicio_01.
*/
void Exercicio_01 ( void )
{
// definir dado
 int lado = 0; // definir variavel com valor inicial
 
// identificar
 printf ( "\n%s\n", "Exercicio_01 - Programa = v0.0" );
 
 //acao
 printf("\n Informe o lado de um quadrado (valor inteiro): ");
 scanf("%i", &lado); getchar( );
 int ladox6 = (lado * 6);
 int area = (lado * lado);
 int areax6 = (ladox6 * ladox6);
 printf("Lado = %i \n",lado);
 printf("Area = %i \n", area);
 printf("Lado 6x maior = %i\n", ladox6);
 printf("Area 6x maior = %i\n", areax6);
// encerrar
 printf ( "\n\nApertar ENTER para continuar." );
 getchar( ); // aguardar por ENTER
} // end Exercicio_01 ( )
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( void )
{
// definir dado
 int opcao = 0;
// identificar
 printf ( "%s\n", "Estudo Dirigido - Programa = v0.0" );
 printf ( "%s\n", "Autor: Pedro Tinoco Lanna - 803103" );
 printf ( "\n" ); // mudar de linha
// acoes
// repetir
 do
 {
 // para mostrar opcoes
 printf ( "\n%s\n", "Opcoes:" );
 printf ( "\n%s" , "0 - Terminar" );
 printf ( "\n%s" , "1 - Exercicio_01" );
 printf ( "\n%s" , "2 - Exercicio_02" );
 printf ( "\n%s" , "3 - Exercicio_03" );
 printf ( "\n%s" , "4 - Exercicio_04" );
 printf ( "\n%s" , "5 - Exercicio_05" );
 printf ( "\n%s" , "6 - Exercicio_06" );
 printf ( "\n%s" , "7 - Exercicio_07" );
 printf ( "\n%s" , "8 - Exercicio_08" );
 printf ( "\n%s" , "9 - Exercicio_09" );
 printf ( "\n%s" , "10 - Exercicio_10" );
 printf ( "\n%s" , "11 - Exercicio_11" );
 printf ( "\n%s" , "12 - Exercicio_12" );
 printf ( "\n" );
 // ler a opcao do teclado
 printf ( "\n%s", "Opcao = " );
 scanf ( "%d", &opcao );
 getchar( ); // para limpar a entrada de dados
 // para mostrar a opcao lida
 printf ( "\n%s%d", "Opcao = ", opcao );
// escolher acao dependente da opcao
 switch ( opcao )
 {
 case 0: // nao fazer nada
 break;
 case 1: // executar Exercicio_01
 Exercicio_01 ( );
 break;
 case 2: // executar Exercicio_02
 Exercicio_02 ( );
 break;
 case 3: // executar Exercicio_03
 Exercicio_03 ( );
 break;
 case 4: // executar Exercicio_04
 Exercicio_04 ( );
 break;
 case 5: // executar Exercicio_05
 Exercicio_05 ( );
 break;
 case 6: // executar Exercicio_06
 Exercicio_06 ( );
 break;
 case 7: // executar Exercicio_07
 Exercicio_07 ( );
 break;
 case 8: // executar Exercicio_08
 Exercicio_08 ( );
 break;
 case 9: // executar Exercicio_09
 Exercicio_09 ( );
 break;
 case 10: // executar Exercicio_10
 Exercicio_10 ( );
 break;
 case 11: // executar Exercicio_11
 Exercicio_11 ( );
 break;
 case 12: // executar Exercicio_12
 Exercicio_12 ( );
 break;
 default: // comportamento padrao
 printf ( "\nERRO: Opcao invalida.\n" );
 break;
 } // end switch
 }
 while ( opcao != 0 );
// encerrar
 printf ( "\n\nApertar ENTER para terminar." );
 getchar( ); // aguardar por ENTER
 return ( 0 ); // voltar ao SO (sem erros)
} // end main ( 
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.0 00. ( OK ) identificacao de programa
0.1 01. ( OK ) identificacao de programa
0.2 02. ( OK ) identificacao de program
*/