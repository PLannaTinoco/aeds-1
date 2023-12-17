#include "Contato.hpp"

int main()
{
    Contato pessoa5;
    pessoa5.fread("pessoa4.TXT");
    cout << pessoa5.getFone();
    return 0;
}
