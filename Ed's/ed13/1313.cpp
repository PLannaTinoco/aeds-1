#include "Contato.hpp"

int main()
{
    Contato pessoa3;
    pessoa3.readPhone("Telefone: ");
    cout << pessoa3.getFone();
    if (pessoa3.isValidPhone())
    {
        cout << "Numero valido";
    } else cout << "Numero invlaido";
    
    return 0;
}