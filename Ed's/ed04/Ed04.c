#include "io.h"
void contarEExibirAlfanumericos(char *palavra, int *totalAlfanumericos) {
    int contador = 0;
    int i = 0;

    while (palavra[i] != '\0') {
        if ((palavra[i] >= 'a' && palavra[i] <= 'z') ||
            (palavra[i] >= 'A' && palavra[i] <= 'Z') ||
            (palavra[i] >= '0' && palavra[i] <= '9')) {
            printf("%c", palavra[i]);
            contador++;
        }
        i++;
    }

    *totalAlfanumericos += contador; // Acumula o total de alfanuméricos
    printf(" - Quantidade de alfanuméricos: %d\n", contador);
}
void mostrarSimbolosAlfanumericos(char *sequencia) {
    int i = 0;
    while (sequencia[i] != '\0') {
        // Verifica se é um caractere alfanumérico
        if ((sequencia[i] >= 'a' && sequencia[i] <= 'z') ||
            (sequencia[i] >= 'A' && sequencia[i] <= 'Z') ||
            (sequencia[i] >= '0' && sequencia[i] <= '9')) {
            printf("%c ", sequencia[i]);
        }
        i++;
    }
    printf("\n");
}
void mostrarSimbolosNaoAlfanumericos(char *sequencia) {
    int i = 0;
    while (sequencia[i] != '\0') {
        // Verifica se não é um caractere alfanumérico
        if (!((sequencia[i] >= 'a' && sequencia[i] <= 'z') ||
              (sequencia[i] >= 'A' && sequencia[i] <= 'Z') ||
              (sequencia[i] >= '0' && sequencia[i] <= '9'))) {
            printf("%c ", sequencia[i]);
        }
        i++;
    }
    printf("\n");
}
int mostrarLetra(char *cadeia)
{
    int contador = 0;
    int tamanho = strlen(cadeia);
    for (int i = 0; i < tamanho; i++)
    {
        if (cadeia[i] > 'K' && cadeia[i] <= 'Z')
        {
            printf("%c e Maiscula e maior que K\n", cadeia[i]);
        }
        else if (cadeia[i] > 'k' && cadeia[i] <= 'z')
        {
            printf("%c e Minuscula e maior que K\n", cadeia[i]);
        }
    }
    return (contador);
}
int contarLetra(char *cadeia){
    int contador = 0;
    int tamanho = strlen(cadeia);
     for (int i = 0; i < tamanho; i++)
    {
        if (cadeia[i] > 'K' && cadeia[i] <= 'Z')
        {
            
            contador++;
        }
        
    }
    return(contador);
}
void mostrarLetra(char *cadeia){
    int contador = 0;
    int tamanho = strlen(cadeia);
     for (int i = 0; i < tamanho; i++)
    {
        if (cadeia[i] > 'K' && cadeia[i] <= 'Z')
        {
            printf("%c e Maiscula e maior que K\n", cadeia[i]);
            
        }
        
    }
    
}
int contarLetra05(char *cadeia){
    int contador = 0;
    int tamanho = strlen(cadeia);
     for (int i = 0; i < tamanho; i++)
    {
        if (cadeia[i] > 'K' && cadeia[i] <= 'Z')
        {
            
            contador++;
        } else if (cadeia[i] > 'k' && cadeia[i] <= 'z'){
            contador++;
            
        }
        
    }
    return(contador);
}
void method_01(){
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
void method_02(){
    int contador = 0;
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores); getchar();
    int tamanho = strlen(valores);
    for (int i = 0; i < tamanho; i++)
    {
        if (valores[i] > 'K' && valores[i] <= 'Z')
        {
            printf("%c e Maiscula e maior que K\n", valores[i]);
            contador++;
        }
        
    }
    printf(" Contador: %i\n", contador);
    //encerrar
    printf("Aperte Enter para encerrar\n"); getchar();
    return 0;
}
void method_03(){
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores); getchar();
    int contador = contarLetra(valores);
    printf("ha %i letras maiusculas\n", contador);
    //encerrar
    printf("Aperte Enter para encerrar\n"); getchar();
   
    return 0;
}

void method_04()
{
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores); getchar();
    mostrarLetra(valores);
   
    //encerrar
    printf("Aperte Enter para encerrar\n"); getchar();
   
    return 0;
}
void method_05(){
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores); getchar();
    int contador = contarLetra05(valores);
    printf("ha %i letras maiusculas e minusculas maiores que K\n", contador);
    //encerrar
    printf("Aperte Enter para encerrar\n"); getchar();
   
    return 0;
}
void method_06(){
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores);
    getchar();
    mostrarLetra06(valores);

    // encerrar
    printf("Aperte Enter para encerrar\n");
    getchar();

    return 0;
}
void method_07(){
    int contador = 0;
    char valores[50];
    printf("Informe uma sequencia de caracteres: \n");
    scanf("%s", &valores);
    getchar();
    int tamanho = strlen(valores);
   for (int i = 0; i < tamanho; i++)
    {
        if (valores[i] >= '0' && valores[i] <= '9' && (valores[i] - '0') % 2 != 0)
        {
           contador++;
            
        }
        
    }
    printf("ha %i numeros impares\n", contador);
    
    // encerrar
    printf("Aperte Enter para encerrar\n");
    getchar();

    return 0;
}
void method_08(){ 
    char sequencia[100];

    printf("Informe uma sequencia de caracteres: \n");
    fgets(sequencia, sizeof(sequencia), stdin);//Eu não soube arrumar este erro, achei estranho pq estava funcionando no exemplo separado

    printf("Simbolos nao alfanumericos na sequencia: ");
    mostrarSimbolosNaoAlfanumericos(sequencia);
    // encerrar
    printf("Aperte Enter para encerrar\n");
    getchar();

    return 0;
}
void method_09(){
    char sequencia[100];

    printf("Informe uma sequencia de caracteres: \n");
    fgets(sequencia, sizeof(sequencia), stdin);//Eu não soube arrumar este erro, achei estranho pq estava funcionando no exemplo separado

    printf("Simbolos alfanumericos na sequencia: ");
    mostrarSimbolosAlfanumericos(sequencia);
    // encerrar
    printf("Aperte Enter para encerrar\n");
    getchar();

    return 0;
}

void method_10(){
    int totalAlfanumericos = 0;
    int quantidadePalavras;

    printf("Informe a quantidade de palavras: ");
    scanf("%d", &quantidadePalavras);
    getchar(); // Limpar o buffer de entrada

    for (int i = 0; i < quantidadePalavras; i++) {
        char palavra[100];

        printf("Informe a palavra %d: ", i + 1);
        fgets(palavra, sizeof(palavra), stdin);//Eu não soube arrumar este erro, achei estranho pq estava funcionando no exemplo separado

        printf("Simbolos alfanumericos na palavra %d: ", i + 1);
        contarEExibirAlfanumericos(palavra, &totalAlfanumericos);
    }

    printf("Total de simbolos alfanumericos em todas as palavras: %d\n", totalAlfanumericos);

    return 0;
}


#include "io.h"
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