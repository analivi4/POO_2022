#include <iostream>
#include <string>

using namespace std;

 class Veiculo{;

  private: 
   string nome;
   string marca;
   int anoDeLancamento;
 //construtor de nível de acesso public
  public: 
  Veiculo(string n, string m, int and){
    this->nome = n;
    this->marca = m;
    this->anoDeLancamento = and;
  }

   void print();
   
 };

 class VeiculoTerrestre: virtual public Veiculo{

 };

 class VeiculoAnfibio: virtual public Veiculo{

 };

 class VeiculoAquatico: virtual public Veiculo{

 };