#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

#include "io.hpp"

using namespace std;
template <typename T>
class myarray
{
private: // area reservada
   int size;
   T *data;
   void alloc(int n){
      if (n>0)
      {
         data = new int[n];
      }
      
   }

public: // area aberta

   void setsize(int n){
      if (n>0)
      {
         size = n;
         alloc(size);
      }
      
   }
   void generateInt(int a, int b)
   {
         
      if (a < b)
      {
         for (int x = 0; x < size; x++)
         {
            // while (y < a && y > b)
            // {
               
            int y=0;
               y = (rand() % (b-a+1))+a;
            // }
            data[x] = y;
         }
      }
   }

   void fprint(string fileName)
   {
      ofstream afile; // output file

      afile.open(fileName);
      afile << size << endl;
      for (int x = 0; x < size; x = x + 1)
      {
         afile << data[x] << endl;
      } // end for
      afile.close();
   } // end fprint ( )

   myarray(void)
   {
   size = 0;
   data = nullptr;
   }
   myarray(int n) // construtor cria o tamanho do array
   {
      // definir valores iniciais
      size = 0;
      data = nullptr;

      // reservar area
      if (n > 0)
      {
         size = n;
         data = new T[size];
      }
   } // end constructor

   void fread ( string fileName ) 
    { 
       ifstream afile; // input file 
       int n = 0; 
       afile.open ( fileName ); 
       afile >> n; 
       if ( n <= 0 ) 
       { 
          cout << "\nERROR: Invalid length.\n" << endl; 
       } 
       else 
       { 
        // guardar a quantidade de dados 
           size  = n; 
        // reservar area 
           data    = new T [ n ]; 
        // ler dados 
           for ( int x = 0; x < size; x=x+1 ) 
           { 
              afile >> data[ x ]; 
           } // end for 
       } // end if 
       afile.close ( ); 
    } // end fread ( )
    
   int getsize(){
      
      return(size);
    }

    int getdata(int n){
      return(data[n]);
    }
    void PrintBubbleSort(){
      int aux = 0;
      for (int i = 0; i < size; i++)
      {
         for (int d = 0; d < size; d++)
         {
            if (data[i] > data[d] )
            {
               aux = data[d];
               data[d] = data[i];
               data[i] = aux;
            }
            
         }
         
      }
      for (int i = 0; i < size; i++)
      {
         cout << data[i] << endl;
      }
      
      
    }
    
      
    
};

#endif
