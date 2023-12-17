#ifndef _STRING_HPP_
#define _STRING_HPP_

#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha

#include <iomanip>
using std::setw; // para definir espacamento

#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream; // para ler    arquivo
using std::ofstream; // para gravar arquivo
class string
{
private:
    unsigned int size; // tamanho efetivo
    int length;        // capacidade
    char *data;        // string

public:
    string(void)
    {
        size = 0;
        length = 80;
        data = new char[length + 1];
    }
    void setData(char *str)
    {
        for (int i = 0; i < length && str[i] != '/0'; ++i)
        {
            data[i] = str[i];
        }
    }

    void push_Back(char c)
    {

        unsigned int x = 0;
        char *aux = data;
        if (data && (int)size < length)
        {
            while (*(data + x))
            {
                x = x + 1;
            }
            *(data + x) = c;
            size = size + 1;
            *(data + x + 1) = '\0';
        }
        cout << "Retornando";
        data = aux;
    }

    void str_push_back_2(char c)
    {
        if (data && (int)size < length)
        {
            char* end = data + size;
            *end = c;
            size = size + 1;
            *(end + 1) = '\0'; 
        } // end if
    } // end str_push_back_2

    const char* get_str( )
    {
        return ( this->data );
    } // end get_str ( )
};

#endif