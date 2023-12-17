#include "Contato.hpp"

int main()
{
    Contato Pessoa1;
    Pessoa1.readName("Nome: ");
    cout << "Nome = " << Pessoa1.getNome();
    return 0;
}
