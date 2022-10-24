
#include "Tipo.h"
Tipo::Tipo(){}
Tipo::Tipo(string tt){tipoImovel = tt;}
void Tipo::setImovel(string tipoImovel){this->tipoImovel = tipoImovel;}
void Tipo::print(){
    cout << "Tipo Imovel: " << tipoImovel << endl;
}