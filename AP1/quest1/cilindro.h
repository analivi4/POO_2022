#include <iostream>

#include "retangulo.h"
#include "circulo.h"

class cilindro:public retangulo, circulo
{
private:

public:
cilindro();
cilindro (float b, float a, float r);
float calculaArea();
float calculaVolume();
void print();
void set();
}