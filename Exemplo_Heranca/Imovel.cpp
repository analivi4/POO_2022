
#include "Imovel.h"
Imovel::Imovel(){}
Imovel::Imovel(string e, string b, float au, float at, int q){
    endereco = e;
    bairro = b;
    areaUtil = au;
    areaTotal = at;
    quarto = q;
}

void Imovel::setEndereco(string endereco){this->endereco = endereco;}
void Imovel::setBairro(string bairro){this->bairro = bairro;}
void Imovel::setAreaUtil(float areaUtil){this->areaUtil = areaUtil;}
void Imovel::setAreaTotal(float areaTotal){this->areaTotal = areaTotal;}
void Imovel::setQuarto(int quarto){this->quarto = quarto;}

void Imovel::print(){
    cout << "Endereco: " << endereco << endl;
    cout << "Bairro: " << bairro << endl;
    cout << "Area util: " << areaUtil << endl;
    cout << "Area total: " << areaTotal << endl;
    cout << "numero de Quartos:" << quarto << endl;
}