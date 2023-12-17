#include "mymatrix.hpp"

int main()
{
    int k;
    cout << "Informe uma constante!";
    cin >> k;
    Matrix<int> matriz1;
    matriz1.fread("DADOS1.TXT");
    cout << "Matriz principal: ";
    matriz1.print();
    matriz1.addRows(0, 1, k);
    cout << "Matriz alterada: ";
    matriz1.print();
    return 0;
}
