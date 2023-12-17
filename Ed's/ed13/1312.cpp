#include "Contato.hpp"

int main()
{
    Contato Pessoa2;
    Pessoa2.readPhone("Numero: ");
    cout << "Telefone = " << Pessoa2.getFone();
    return 0;
}
