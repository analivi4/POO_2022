// Com encapsulamento 
//Grupo: Ana Lívia e Luzia Vanessa


#include <iostream>
#include <string>

using namespace std;
using namespace Mercado;

 class Mercado{
    private:
        string nome,tipo,porte;
        int quantidade, lucro;

        
    
    public:
        Mercado(string n, string t, int q, int l){
            nome = n;
            tipo = t;
            quantidade = q;
            lucro = l;
        }
        string getNome();
        void setNome(string n);

        string  getTipo();
        void setTipo(string t);

        int getQuantidade();
        void setQuantidade(int q);

        int getLucro();
        void setQuantidade(int l);

        void imprimir();
        void porte(int x);
        

 };

void Mercado::imprimir(){
    cout << "Nome:"      << nome      << endl;
    cout << "Tipo:"        << tipo        << endl;
    cout << "Quantidade:"  << quantidade << endl;
    cout << "Lucro:"  << lucro << endl;
;
}



void Mercado::porte(int x){
    if(x < 50){
       porte = "Pequeno";
        cout << "Porte:"  << porte << endl;

    }else if(x <= 50 &&  x < 100 ){
      porte = "Médio";
          cout << "Porte:"  << porte << endl;
    }else{
      porte = "Grande";
    cout << "Porte:"  << porte << endl;
    }
}

 string Mercado::getNome(){
    return nome;
 }

 void Mercado::setNome(string n){
    nome = n;
}

 string Mercado::getTipo(){
    return tipo;
 }

 void Mercado::setTipo(string t){
    tipo = t;
}

void Mercado::getQuantidade(){
    return quantidade;
}

void Mercado::setQuantidade(int q){
    quantidade = q;
}

void Mercado::getLucro(){
    return lucro;
}

void Mercado::setLucro(int l){
    lucro = l;
}

int main(){

    Mercado * m1 = new Mercado("M1", "Frigorifico", 3, 40);
    Mercado * m2 = new Mercado("M2", "Frutaria", 5, 70);
    Mercado * m3 = new Mercado("M3", "Atacadão", 5, 120);

   m1->imprimir();
   //Mercado->porte(lucro.mercado);
}