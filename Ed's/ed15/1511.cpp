#include "string.hpp"

int main()
{
    char s[] = "ABCDE";
    char* c = 0;
    string S0;
    cout << "Infomre uma string: ";
    cin >> s;
    cout << endl;
    cout << "Informe um caractere: ";
    cin >> c; 
    S0.setData(s);
    cout << "String: " << c << endl;
    S0.str_push_back_2(*c);
    cout << "String nova: " << S0.get_str();
    return 0;
}
