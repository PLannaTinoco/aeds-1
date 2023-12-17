#include "mymatrix.hpp"
using namespace std;

void Exercicio1211(){
    int row, column;
    int inicial, final;
    string filename = "DADOS.TXT";
    cout << "Informe a quantidade de linhas: " << endl;
    cin >> row; getchar();
    cout << "Informe o numero de colunas: " << endl;
    cin >> column; getchar();
    cout << "Informe o inicio do intervalo: " <<endl;
    cin >> inicial; getchar();
    cout << "Informe o final do intervalo: " <<endl;
    cin >> final; getchar();
    if (inicial>final||row <= 0||column <= 0)
    {
        cout<<"Valor informado incorreto!";
    } else{
        Matrix<int> Matriz(row, column, 0);
        Matriz.randomIntGenerate(inicial, final);
        Matriz.fprint(filename);
        Matriz.print();
        cout << "Matriz gravada em: " << filename << endl;
        
    }
     cout<<"Aperte ENTER para terminar";
     getchar();
}

void Exercicio1212(){
    int k;
   Matrix<int> matriz1;
   matriz1.fread("DADOS1.TXT");
   matriz1.print();
   cout << "Infrome uma constante: ";
   cin >> k; getchar();
   matriz1.scalar(k);
   matriz1.print();
   
}

void Exercicio1213(){
    string filename = "DADOS1.TXT";
    Matrix<int> matriz;
    matriz.fread(filename);
    if (matriz.identidade())
    {
        cout << "Matriz Identidade";
        matriz.print();
    } else cout << "Nao eh Matriz Identidade";



}
/**
 * Menu de opcoes
 * 
 */
void menuOpcoes()
{
    cout << endl;
    cout << "Escolha alguma das opcoes a seguir:" << endl;
    cout << "  0 - Encerrar programa " << endl;
    cout << "  1 - Exercicio 1111    " << endl;
    cout << "  2 - Exercicio 1112    " << endl;
    cout << "  3 - Exercicio 1113    " << endl;
    cout << "  4 - Exercicio 1114    " << endl;
    cout << "  5 - Exercicio 1115    " << endl;
    cout << "  6 - Exercicio 1116    " << endl;
    cout << "  7 - Exercicio 1117    " << endl;
    cout << "  8 - Exercicio 1118    " << endl;
    cout << "  9 - Exercicio 1119    " << endl;
    cout << " 10 - Exercicio 1120    " << endl;
    cout << " 11 - Exercicio 11E1    " << endl;
    cout << " 12 - Exercicio 11E2    " << endl;
    cout << endl;
} // fim menuOpcoes()

// -------------------------- definicao do metodo principal

int main( void )
{
    int opcao = 0;

    do
    {
        clearscreen(  );

        // mostrar identificacao do autor e programa
        id( "Programa: Exercicios11 - v0.0" );

        // mostrar menu de opcoes
        menuOpcoes(  );

        // ler opcao do teclado
        cout << "opcao = " << endl;
        cin >> opcao; getchar();
        // executar a opcao escolhida
        switch ( opcao )
        {
        case 0:
            cout << "ENTER para encerar";
            break;
        case 1:
          
            break;
        case 2:
           
            break;
        case 3:
            
            break;
        case 4:
           
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        case 8:
            
            break;
        case 9:
            
            break;
        case 10:
            
            break;
        case 11:
        
            break;
        case 12:
            
            break;
        default:
            pause( "ERRO: opcao invalida!" );
            break;
        } // fim switch

    } while ( opcao != 0 );

    return ( 0 );
}