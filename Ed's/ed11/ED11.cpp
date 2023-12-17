#include "myarray.hpp"
using namespace std;


void exercicio1111(){
    
    myarray <int> a;
    int f1,f2;
    a.setsize(readint("n = "));
    cin>>f1; getchar();
    cin>>f2; getchar();
    a.generateInt(f1,f2);
    a.fprint("DADOS.TXT");
    cout<<"Aperte ENTER para terminar";
    getchar();
    
}

void exercicio1112(){
myarray <int> a;
   
    a.fread("DADOS.TXT");
        int maior = a.getdata(0);
    for (int i = 0; i < a.getsize(); i++)
    {
        if (a.getdata(i)>maior && a.getdata(i)%2 == 0)
        {
            maior = a.getdata(i);
        }
        
    }
    cout << maior;
    cout<<"Aperte ENTER para terminar";
    getchar();
}
void exercicio1113(){
    myarray <int> a;
   
    a.fread("DADOS.TXT");
        int menor = a.getdata(0);
    for (int i = 0; i < a.getsize(); i++)
    {
        if (a.getdata(i)<menor && a.getdata(i)%2 != 0)
        {
            menor = a.getdata(i);
        }
        
    }
    cout << menor;
    cout<<"Aperte ENTER para terminar";
    getchar();
}

void exercicio1114(){
     myarray<int> a;
    a.fread("DADOS.TXT");
    int tamanho = a.getsize();
    int y, x;
    do{
        cout << "Informe um intervalo entre 0 e  " << tamanho << ":";
        cin >> y;
        cout << "Informe outro valor maior que o anterior: ";
        cin >> x;
        if (x <= y)
        {
            cout << "O segundo valor deve ser menor que o primeiro!";
        }
    }while (y >= x);
    
    int soma = 0;
    for (int i = 0; i < (x-y); i++)
    {
        soma = soma + a.getdata(y+i);
        
        
    }
    
    cout<<"A soma dos valores entre " << y << " e " << x << " eh igual a: " << soma << endl;
    cout<<"Aperte ENTER para terminar";
    getchar();    
}
void exercicio1115(){
    myarray<int> a;
    a.fread("DADOS.TXT");
    int tamanho = a.getsize();
    int y, x;
    do{
        cout << "Informe um intervalo entre 0 e  " << tamanho << ":";
        cin >> y;
        cout << "Informe outro valor maior que o anterior: ";
        cin >> x;
        if (x <= y)
        {
            cout << "O segundo valor deve ser menor que o primeiro!";
        }
    }while (y >= x);
    
    int soma = 0;
    for (int i = 0; i < (x-y); i++)
    {
        soma = soma + a.getdata(y+i);
        
        
    }
    int media = 0;
    media = soma/(x-y)+1;
    cout<< "A soma dos valores entre " << y << " e " << x << " eh igual a: " << soma << endl;
    cout << "A media dos valores eh = " << media;    
    cout<<"Aperte ENTER para terminar";
    getchar();
}




void exercicio1120(){
     myarray <int> a;
    a.fread("DADOS.TXT");
    a.PrintBubbleSort();

    cout<<"Aperte ENTER para terminar";
    getchar();

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
        opcao = readint("Opcao = ");

        // executar a opcao escolhida
        switch ( opcao )
        {
        case 0:
            pause("Aperte ENTER para terminar!");
            break;
        case 1:
           exercicio1111();
            break;
        case 2:
            exercicio1112();
            break;
        case 3:
            exercicio1113();
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