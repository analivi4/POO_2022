#include <iostream>
#include <string>
using namespace std;

class Imovel{
private:
    string endereco, bairro;
    float areaUtil, areaTotal;
    double quarto;
public:
    Imovel();
    Imovel(string e, string b, float au, float at, double q);
    void setEndereco(string endereco);
    void setBairro(string bairro);
    void setAreaUtil(float areaUtil);
    void setAreaTotal(float areaTotal);
    void setQuarto(double quarto);
    void print();
};