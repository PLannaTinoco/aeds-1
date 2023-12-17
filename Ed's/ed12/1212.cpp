#include "mymatrix.hpp"

int main()
{
   int k;
   Matrix<int> matriz1;
   matriz1.fread("DADOS1.TXT");
   matriz1.print();
   cout << "Infrome uma constante: ";
   cin >> k; getchar();
   matriz1.scalar(k);
   matriz1.print();
   return 0;
}
