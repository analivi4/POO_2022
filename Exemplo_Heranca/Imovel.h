#pragma once
#include <iostream>
#include <string>
using namespace std;

class Imovel{
private:
    string endereco, bairro;
    float areaUtil, areaTotal;
    int quarto;
public:
    Imovel();
    Imovel(string e, string b, float au, float at, int q);
    void setEndereco(string endereco);
    void setBairro(string bairro);
    void setAreaUtil(float areaUtil);
    void setAreaTotal(float areaTotal);
    void setQuarto(int quarto);
    void print();
};