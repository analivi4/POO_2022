/*#include<iostream>

using namespace std;

class carro
{
private:
    string Marca;
    int Ano;
    int Vel;
    // construtor 
    carro();
public:
    string getMarca();
    void setMarca(string m);

    int getAno();
    void setAno(int a);

    int getVel();
    void setVel(int v);

};

string carro::getMarca(){
    return Marca;
}

carro::carro(/* args )
{
}

carro::~carro()
{
}
*/
#include <iostream>
#include <string>

using namespace std;

 class Carro{
    private:
        string Marca;
        int Ano;
        int Velocidade;

        
    
    public:
        Carro(int t);
        string getMarca();
        void setMarca(string m);

        int  getAno();
        void setAno(int a);

        int getVelocidade();
        void setVelocidade(int v);
        void imprimir();

 };

void Carro::imprimir(){
    cout << "Marca:"      << Marca      << endl;
    cout << "Ano:"        << Ano        << endl;
    cout << "Velocidade"  << Velocidade << endl;
}

Carro::Carro(int t){
    if(t == 1){
        Marca = "Fiat";
        Ano = 2019;
        Velocidade = 180;

    }else if(t == 2){
        Marca = "Fiat";
        Ano = 2020;
        Velocidade = 150;

    }

    Marca = "Fiat";
    Ano = 2019;
    Velocidade = 180;
}
string Carro::getMarca(){
    return Marca;
 }

void Carro::setMarca(string m){
    Marca = m;
}

void Carro::setAno(int a){
    Ano = a;
}

void Carro::setVelocidade(int v){
    Velocidade = v;
}

int main(){
    Carro *carro = new Carro(1);

    carro -> imprimir();

    return 0;
}