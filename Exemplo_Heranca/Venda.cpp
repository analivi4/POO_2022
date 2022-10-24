
#include "Venda.h"

Venda::Venda():Cadastro(),Imovel(),Tipo(){}

Venda::Venda(string n, string f, string e, string b, float au, float at, int q, string tt, float v):
Cadastro(n,f), Imovel(e,b,au,at,q),Tipo(tt){
    valor = v;
}

void Venda::set(){
    cout << "Cadastro do proprietario: " << endl;
    Cadastro::setNome("Pedro");
    Cadastro::setFone("23423432312");
t
    cout << "Imovel: " << endl;
    Imovel::setEndereco("Rua B");
    Imovel::setBairro("Flores");
    Imovel::setAreaUtil(10.5);
    Imovel::setAreaTotal(22.9);
    Imovel::setQuarto(2);

    cout << "Tipo do imovel: " << endl;
    Tipo::setImovel("Cabana");

    cout << "Valor de venda: " ;
    cin >> valor;
}   
void Venda::print(){
    cout << "Proprietario: "  << endl;
     Cadastro::print();

    cout << "Imovel: "  << endl;
    Imovel::print();

    cout << "Tipo Imovel: "  << endl;
    Tipo::print();

    cout << "valor: "  << valor << endl;
}