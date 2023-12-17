#include "mymatrix.hpp"

int main()
{
    int row, column;
    int inicial, final;
    string filename = "DADOS1.TXT";
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

     
    
    return 0;
}
