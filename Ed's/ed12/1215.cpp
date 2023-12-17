#include "mymatrix.hpp"

int main()
{
    Matrix <int> Matriz1;
    Matrix <int> Matriz2;
    Matrix<int> soma;
    Matriz1.fread("DADOS.TXT");
    cout << "Matriz1: ";
    Matriz1.print();
    Matriz2.fread("DADOS1.TXT");
    cout << "Matriz2: ";
    Matriz2.print();
    soma = Matriz1.add(Matriz2);
    cout << "Soma: ";
    soma.print();
    return 0;
}
