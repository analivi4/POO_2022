#ifndef DVD_H
#define DVD_H
#include "Midia.h"
#include <bits/stdc++.h>

using namespace std;

class DVD : public Midia{

private:
    vector <string> formatoAudio;
    vector <string> formatoTela;
    string legenda;

public:
    //construtor vazio
    DVD();

    //destrutor
    ~DVD();

    //construtor
    DVD(const vector <string> &, const vector <string> &, const string &, const string &, const string &, const vector <string> &, 
    int, const string &, const vector <string> &);
    
/*-----------Encapsulamento-----------*/
    const vector <string> getFormatoAudio() const;
    void setFormatoAudio(const vector <string> &);

    const vector <string> getFormatoTela() const;
    void setFormatoTela(const vector <string> &);

    string getLegenda() const;
    void setLegenda(string &);

//funcao adicional
    void print();
};
#endif