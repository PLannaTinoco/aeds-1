#include "myarray.hpp"

int main()
{
    myarray<int> a;
    a.fread("DADOS.TXT");
    int tamanho = a.getsize();
    int y, x;
    do{
        cout << "Informe um intervalo entre 0 e  " << tamanho << ":";
        cin >> y;
        cout << "Informe outro valor maior que o anterior: ";
        cin >> x;
        if (x <= y)
        {
            cout << "O segundo valor deve ser menor que o primeiro!";
        }
    }while (y >= x);
    
    int soma = 0;
    for (int i = 0; i < (x-y); i++)
    {
        soma = soma + a.getdata(y+i);
        cout<< a.getdata(y+i)<<endl;
        
    }
    
    cout<<"A soma dos valores entre " << y << " e " << x << " eh igual a: " << soma << endl;
        cout<< a.getdata(0)<<endl;

    return 0;
}
