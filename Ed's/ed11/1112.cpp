#include "myarray.hpp"

int main(int argc, char const *argv[])
{
    myarray <int> a;
    a.fread("DADOS.TXT");
        int maior = a.getdata(0);
    for (int i = 0; i < a.getsize(); i++)
    {
        if (a.getdata(i)>maior && a.getdata(i)%2 == 0)
        {
            maior = a.getdata(i);
        }
        
    }
      std::cout << maior;
    return 0;
}
