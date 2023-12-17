#include "mymatrix.hpp"

int main()
{
   Matrix<int> Matriz1; 
   Matrix<int> Matriz2;
   bool condicao = true;
   Matriz1.fread("DADOS.TXT");
   Matriz2.fread("DADOS1.TXT");
   if (Matriz1.getcolunm() != Matriz2.getRow() || Matriz1.getRow() != Matriz2.getRow() )
   {
    cout<<"As matrizes nao sao iguais!" << endl;
   } else {
    for (int i = 0; i < Matriz1.getRow(); i++)
    {
        for (int n = 0; n < Matriz2.getcolunm(); n++)
        {
            if (Matriz1.get(i, n) != Matriz2.get(i,n))
            {
                condicao = false;
            } else condicao = true;
              
        }
        
    }
    if (condicao==true)
    {
        cout << "As matrizes sao iguais! ";
    }else cout << "As matrizes sao diferentes! ";
    
   }
   
    return 0;
}
