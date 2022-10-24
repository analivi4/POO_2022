#include <iostream>

class circulo 
{
private:
float raio;

public:
circulo();
circulo (float r);
void setRaio(float raio);
float getRaio();
float calculaArea();
float calculaPerimetro();
void print();
}