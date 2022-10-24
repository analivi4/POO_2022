#include <iostream>
#include "Cadastro.h"

using namespace std;

Cadastro::Cadastro(){}
Cadastro::Cadastro(string n, string f){nome = n; fone = f;}

void Cadastro::setNome(string nome){this->nome = nome;}
void Cadastro::setFone(string fone){this->fone = fone;}

void Cadastro::print(){
    cout<<"Nome: "<<nome<<endl;
    cout<<"Fone: "<<fone<<endl;
}