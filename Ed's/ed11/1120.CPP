#include "myarray.hpp"

int main()
{
    myarray <int> a;
    a.fread("DADOS.TXT");
    a.PrintBubbleSort();

    return 0;
}
