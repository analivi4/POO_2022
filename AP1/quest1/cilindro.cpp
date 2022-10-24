#include <iostream>
#include <math.h>
#include "cilindro.h"

using namespace std;

cilindro :: cilindro():retangulo(), circulo(){}
cilindro :: cilindro (float b, float a, float r){
    base=b;
    altura=a;
    raio=r;
}



float cilindro :: calculaArea(){
    float area;
    area = (2*3,14*getRaio)*altura;
}
float cilindro :: calculaVolume(){
    float volume;
    volume=(3,14 * pow(raio, 2)  * altura);
    return volume;
}
void cilindro :: print(){
    circulo::print();
    retangulo::print();
    cout<<"Area cilindro:"<<calculaArea<<endl;
    cout<<"Volume cilindro:"<<calculaVolume<<endl; 
}
