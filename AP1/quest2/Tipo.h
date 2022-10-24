#include <iostream>
#include <string>
using namespace std;

class Tipo{
private:
    string tipoImovel;
public:
    Tipo();
    Tipo(string ti);
    void setImovel(string tipoImovel);
    void print();
};