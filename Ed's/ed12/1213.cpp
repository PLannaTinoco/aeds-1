#include "mymatrix.hpp"

int main()
{
    string filename = "DADOS1.TXT";
    Matrix<int> matriz;
    matriz.fread(filename);
    if (matriz.identidade())
    {
        cout << "Matriz Identidade";
        matriz.print();
    } else cout << "Nao eh Matriz Identidade";


    return 0;
}
