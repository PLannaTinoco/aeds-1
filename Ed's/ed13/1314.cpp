#include "Contato.hpp"

int main()
{
    Contato pessoa4;
    pessoa4.setNome("Guto");
    pessoa4.setFone("31997896843");
    pessoa4.fprint("pessoa4.TXT");
    cout << "Guardando no arquivo";
    return 0;
}
