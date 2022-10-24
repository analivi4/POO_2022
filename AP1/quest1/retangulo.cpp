#include <iostream>
#include "retangulo.h"

using namespace std;

retangulo :: retangulo(){}
retangulo :: retangulo(float b, float a){
    base=b;
    altura=a;
}

void retangulo :: setBase(float base) { this->base = base; } 
float retangulo :: getBase() { return this->base; }
void retangulo :: setAltura(float altura) { this->altura = altura; } 
float retangulo :: getAltura() { return this->altura; }
float retangulo ::calculaArea ( float base, float altura){
    float area;
    area=base*altura;
    return area;
}
float retangulo :: calculaPerimetro(float base, float altura){
    float perimetro;
    perimetro=(2*base)+(2*altura);
    return perimetro;
}
void retangulo :: print(){
    cout<<"DadosRetangulo:"<<endl<<"base: "<<base<<endl<<"altura: "<<altura<<endl;

}
