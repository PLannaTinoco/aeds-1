#ifndef  _CONTATO_H_ 
#define _CONTATO_H_ 
 
// dependencias 
 
#include <iostream> 
using std::cin  ;  // para entrada 
using std::cout;   // para saida 
using std::endl;  // para mudar de linha 
 
#include <iomanip> 
using std::setw;  // para definir espacamento 
 
#include <string> 
using std::string;  // para cadeia de caracteres 
 
#include <fstream> 
using std::ofstream;  // para gravar arquivo 
using std::ifstream;   // para ler    arquivo 
 
 
// outras dependencias 
 
void pause ( std::string text ) 
{ 
    std::string dummy; 
    std::cin.clear ( ); 
    std::cout << std::endl << text; 
    std::cin.ignore( ); 
    std::getline(std::cin, dummy); 
    std::cout << std::endl << std::endl; 
} // end pause ( ) 
 
#include "Erro.hpp" 
 
// ----------------------------------------------  definicao de classe 
 
/** 
  * Classe para tratar contatos, derivada da classe Erro. 
  */ 
class Contato : public Erro 
{ 
  /** 
    * atributos privados. 
    */ 
    private: 
      string nome; 
      string fone; 
      string fone2;

      bool testfone(){
       bool verificador = true;
       
       if (fone.size()!=10)
       {
        verificador = false;
       }else {
        for (int i = 0; i < (int)fone.size(); i++)
        {
            if (fone[i]<0 || fone[i] >=10 )
            {
                verificador = false;
            }
            
        }
        
       }
       return(verificador);
        
      }
  /** 
    * definicoes publicas. 
    */ 
    public: 
    /** 
      * Destrutor. 
      */ 
     ~Contato ( ) 
       { } 
 
    /** 
      * Construtor padrao. 
      */ 
      Contato ( )
    {
        setErro ( 0 ); // nenhum erro, ainda
        // atribuir valores iniciais vazios
        nome  = "";
        fone  = "";
      
    } // end constructor (padrão)

        bool isValidPhone ( )
    {
        return ( testfone( ) );
    } // end phoneIsValid ( )

    /** 
      * Funcao para obter nome. 
      * @return nome armazenado 
      */ 
      std::string getNome ( ) 
      { 
        return ( this->nome ); 
      } // end getNome ( ) 
 
    /** 
      * Funcao para obter fone. 
      * @return fone armazenado 
      */ 
      std::string getFone ( ) 
      { 
        return ( this->fone ); 
      } // end getFone ( )

      /** 
      * Funcao para obter dados de uma pessoa. 
      * @return dados de uma pessoa 
      */ 
      std::string toString ( ) 
      { 
        return ( "{ "+getNome( )+", "+getFone( )+" }" ); 
      } // end toString ( ) 
 

       /** 
      * Metodo para atribuir nome. 
      * @param nome a ser atribuido 
      */ 
      void setNome ( std::string nome ) 
      { 
        if ( nome.empty ( ) ) 
           setErro ( 1 ); // nome invalido 
        else 
            this->nome = nome; 
      } // end setNome ( ) 
 
    /** 
      * Metodo para atribuir telefone. 
      * @param fone a ser atribuido 
      */ 
      void setFone ( std::string fone ) 
      { 
       
            
        if ( fone.empty ( ) ) 
           setErro ( 2 ); // fone invalido 
        else {
            
            this->fone = fone; }
       
      } // end setFone ( ) 
      std::string getFone2(){
        return(fone2);
      }

      void setFone2( std::string phone2){
        fone2 = phone2;
      }
 
    void readName(std::string text){
        std::string name;
        cout << text;
        cin >> name;getchar();
        setNome(name);

    }
    
    void readPhone(std::string text){
        std::string phone;
        cout << text;
        cin >> phone;getchar();
        setFone(phone);

    }
    void fprint(std:: string filename){
      ofstream afile;
      afile.open(filename);
      afile << nome << endl;
      afile << fone << endl;
      afile.close();
    }

    void fread(std:: string filename){
      ifstream afile;
      afile.open(filename);
      afile >> nome;
      afile >> fone;
      afile.close();
    }

    /** 
      * Construtor alternativo. 
      * @param nome_inicial a ser atribuido 
      * @param fone_inicial   a ser atribuido 
      */ 
      Contato ( std::string nome_inicial, std::string fone_inicial, std::string fone_secund ) 
      { 
          setErro ( 0 );   // nenhum erro, ainda 
 
       // atribuir valores iniciais 
 
          setNome ( nome_inicial ); // nome = nome_inicial; 
          setFone ( fone_inicial     ); // fone   =  fone_inicial; 
          setFone2 (fone_secund);
 
      } // end constructor (alternativo)



}; // fim da classe Contato 
 
using ref_Contato = Contato*;  // similar a typedef Contato* ref_Contato; 
 
#endif