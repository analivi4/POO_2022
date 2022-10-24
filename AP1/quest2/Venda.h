#include <iostream>
#include <string>
using namespace std;

#include "Cadastro.h"
#include "Imovel.h"
#include "Tipo.h"

class Venda: public Cadastro, Imovel, Tipo{
private:
    float valor;
public:
    Venda();
    Venda(string n, string f, string e, string b, float au, float at, double q, string ti, float v);
    void set();
    void print();
};
