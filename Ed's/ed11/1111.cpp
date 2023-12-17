#include "myarray.hpp"
int main()
{
    
    myarray <int> a;
    int f1,f2;
    a.setsize(readint("n = "));
    cout<<"informe um valor inteiro: ";
    cin>>f1;
    cout<<"informe um valor inteiro: ";
    cin>>f2;
    a.generateInt(f1,f2);
    a.fprint("DADOS.TXT");
    return 0;
}
