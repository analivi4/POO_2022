#include <iostream>
#include "circulo.h"

using namespace std;

circulo :: circulo (){}
circulo :: circulo (float r){
    r = raio;
}

void circulo :: setRaio(float raio) { this->raio = raio; } 
float circulo :: getRaio() { return this->raio; }
float circulo:: calculaArea(float raio){
    float area;
    area=(3,14*raio);
    return area;
}
float circulo :: calculaPerimetro();

void circulo :: print(){
    cout<<"Dados Circulo\nraio:"<<raio<<endl;
}