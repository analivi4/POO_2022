#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cadastro{
private:
    string nome, fone;
public:
    Cadastro();
    Cadastro(string n, string f);
    void setNome(string nome);
    void setFone(string fone);
    void print();
};
