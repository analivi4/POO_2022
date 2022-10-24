#include <iostream>
#include "Venda.h"

using namespace std;

Venda::Venda():Cadastro(),Imovel(),Tipo(){}

Venda::Venda(string n, string f, string e, string b, float au, float at, double q, string ti, float v):
Cadastro(n,f), Imovel(e,b,au,at,q),Tipo(ti){
    valor = v;
}

void Venda::set(){
    Cadastro::setNome("Marco");
    Cadastro::setFone("3552-1663");

    Imovel::setEndereco("Campus Morro do Cruzeiro");
    Imovel::setBairro("Bauxita");
    Imovel::setAreaUtil(8);
    Imovel::setAreaTotal(8);
    Imovel::setQuarto(0);

    Tipo::setImovel("Sala");

    valor=0,00;
}   
void Venda::print(){
    cout<<"Proprietario: "<<endl;
     Cadastro::print();

    cout<<"Imovel: "<<endl;
    Imovel::print();

    cout<<"Tipo Imovel: "<<endl;
    Tipo::print();

    cout<<"valor: R$"<<valor<<endl;
}