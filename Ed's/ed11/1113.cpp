#include "myarray.hpp"
int main(){
myarray <int> a;
   
    a.fread("DADOS.TXT");
        int menor = a.getdata(0);
    for (int i = 0; i < a.getsize(); i++)
    {
        if (a.getdata(i)<menor && a.getdata(i)%2 != 0)
        {
            menor = a.getdata(i);
        }
        
    }
    std::cout << menor;
    cout<<"Aperte ENTER para terminar";
    getchar();
}