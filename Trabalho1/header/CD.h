#ifndef CD_H
#define CD_H
#include <bits/stdc++.h>
#include "Midia.h"

//Heranca -> CD herda de Midia
class CD : public Midia{

private:
    int duracao;
    float volume;
    bool coletanea;

public:

    //construtor vazio
    CD();
    //destrutor
    ~CD();

    //construtor
    CD(int, float, bool, const string &, const string &, const vector <string> &, 
    int, const string &, const vector <string> &);

/*-----------Encapsulamento-----------*/

    int getDuracao() const;
    void setDuracao(int);

    float getVolume() const;
    void setVolume(float);

    bool getColetanea() const;
    void setColetanea(bool);

//funcao adicional
    void print();
};
#endif