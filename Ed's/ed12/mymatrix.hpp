#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_

// dependencias
#include "io.hpp"

#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha

#include <iomanip>
using std::setw; // para definir espacamento

#include <string>
using std::string; // para cadeia de caracteres

#include <fstream>
using std::ifstream; // para ler    arquivo
using std::ofstream; // para gravar arquivo

template <typename T>
class Matrix
{
private: // area reservada
   T optional;
   int rows;
   int columns;
   T **data;

public: // area aberta
   Matrix()
   {
      // definir valores iniciais
      this->rows = 0;
      this->columns = 0;
      // sem reservar area
      data = nullptr;
   } // end constructor

   Matrix(int rows, int columns, T initial)
   {
      // definir dado local
      bool OK = true;
      // definir valores iniciais
      this->optional = initial;
      this->rows = rows;
      this->columns = columns;
      // reservar area
      data = new T *[rows];
      if (data != nullptr)
      {
         for (int x = 0; x < rows; x = x + 1)
         {
            data[x] = new T[columns];
            OK = OK && (data[x] != nullptr);
         } // end for
         if (!OK)
         {
            data = nullptr;
         } // end if
      }    // end if
   }       // end constructor

   ~Matrix()
   {
      if (data != nullptr)
      {
         for (int x = 0; x < rows; x = x + 1)
         {
            delete (data[x]);
         } // end for
         delete (data);
         data = nullptr;
      } // end if
   }    // end destructor ( )

   void set(int row, int column, T value)
   {
      if (row < 0 || row >= rows ||
          column < 0 || column >= columns)
      {
         cout << "\nERROR: Invalid position.\n";
      }
      else
      {
         data[row][column] = value;
      } // end if
   }    // end set ( )

   T get(int row, int column)
   {
      T value = optional;
      if (row < 0 || row >= rows ||
          column < 0 || column >= columns)
      {
         cout << "\nERROR: Invalid position.\n";
      }
      else
      {
         value = data[row][column];
      } // end if
      return (value);
   } // end get ( )

   void print()
   {
      cout << endl;
      for (int x = 0; x < rows; x = x + 1)
      {
         for (int y = 0; y < columns; y = y + 1)
         {
            cout << data[x][y] << "\t";
         } // end for
         cout << endl;
      } // end for
      cout << endl;
   } // end print ( )

   void randomIntGenerate(int inferior, int superior)
   {
      srand(time(0));
      int x = 0;
      int y = 0;
      int z = 0;

      for (x = 0; x < rows; x = x + 1)
      {
         for (y = 0; y < columns; y = y + 1)
         {
            z = (rand() % (superior - inferior + 1)) + inferior;
            data[x][y] = z;
         } // end for
      }    // end for
   }       // end randomIntGenerate ( )

   void fprint(string fileName)
   {
      ofstream afile; // output file

      afile.open(fileName);
      afile << rows << endl;
      afile << columns << endl;
      for (int x = 0; x < rows; x = x + 1)
      {
         for (int y = 0; y < columns; y++)
         {
            afile << data[x][y] << endl;
         }
         
      } // end for
      afile.close();
   } // end fprint ( )

   void fread(string filename){
       ifstream afile; // input file 
       int row = 0; 
       int column = 0; 
       afile.open ( filename ); 
       afile >> row; 
       afile >> column; 
       if ( row <= 0 || column <= 0 ) 
       { 
          cout << "\nERROR: Invalid row or column.\n" << endl; 
       } 
       else 
       { 
        // guardar a quantidade de dados 
           rows = row;
           columns = column; 
        // reservar area 
               data = new T *[row]; // alocar ponteiros para as linhas
        for (int i = 0; i < row; ++i)
        {
            data[i] = new T[column]; // alocar colunas para cada linha
        } 
        // ler dados 
           for ( int x = 0; x < row; x=x+1 ) 
           { 
            for (int y = 0; y < column; y++)
            {
              afile >> data[x][y]; 
            }
           } // end for 
       } // end if 
       afile.close ( ); 
    } // end fread ( )
void free()
    {
        if (data != nullptr)
        {
            delete (data);
            data = nullptr;
        } // end if
    } // end free ( )



     void scalar(int n){
        
        
         for (int x = 0; x < rows; x++)
         {
            for (int y = 0; y < columns; y++)
            {
               set(x, y, (get(x, y)*n));
            }
            
         }
         
      }

      bool identidade(){
        
        int resultado = 0;
         if (rows != columns)
         {
            cout << "A matriz deve ser quadrada!";
         } else{
            for (int i = 0; i < rows; i++)
            {
               if (data[i][i] != 1)
               {
                  resultado = 0;
               } else {
                  resultado += 1;
               }
               
            }
            
         }
         if (resultado == rows)
         {
            return true;
         } else return false;
         
      }
   int getRow(){
      return(rows);
   }
   int getcolunm(){
      return(columns);
   }

  Matrix<T> add(Matrix<T> &aux){
   
   aux.print();
   print();
   //iniciar matriz obj result
   // for (int x = 0; x < rows; x++)
   // {
   //    for (int y = 0; y < columns; y++)
   //    {
   //       Result.set(x, y, 0);
   //    }
      
   // }
   // Result.print();
   
   if (rows != aux.rows || columns != aux.columns)
   {
      cout << "variaveis nao sao iguais";
   }else{
   Matrix<int> Result(rows, columns, 0);
      cout << "somando";
      for (int i = 0; i < rows; i++)
      {
         for (int n = 0; n < columns; n++)
         {
            Result.data[i][n] = aux.data[i][n] + data[i][n];
         }
         
      }
      
   cout << endl << "result";
   Result.print();
   cout << "retornando";
   return Result ;
   }
   }
   void addRows(int row1, int row2, int k){
      for (int i = 0; i < columns; i++)
      {
         data[row1][i] = ((data[row2][i] + data[row1][i]) * k);
      }
      
   }
}; // end class
#endif