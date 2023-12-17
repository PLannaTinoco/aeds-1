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
        
        
    }
    int media = 0;
    media = soma/(x-y)+1;
    cout<< "A soma dos valores entre " << y << " e " << x << " eh igual a: " << soma << endl;
    cout << "A media dos valores eh = " << media;    

    return 0;
}
