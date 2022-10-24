#include <iostream>

using namespace std;

class retangulo
{
private:
    float base;
    float altura;
public:
    retangulo();
    retangulo(float b, float a);

    void setBase(float base);
    float getBase();
    void setAltura(float altura);
    float getAltura(); 
    float calculaArea(float base, float altura);
    float calculaPerimetro(float base, float altura);
    void print();
};



