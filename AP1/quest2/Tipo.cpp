#include <iostram>
#include "Tipo.h"

using namespace std;

Tipo::Tipo(){}
Tipo::Tipo(string tt){tipoImovel = ti;}

void Tipo::setImovel(string tipoImovel){this->tipoImovel = tipoImovel;}
void Tipo::print(){
    cout<<"Tipo Imovel: "<<tipoImovel<<endl;
}