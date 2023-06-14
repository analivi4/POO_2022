#ifndef MIDIA_H
#define MIDIA_H
#include <bits/stdc++.h>

using namespace std;

class Midia{

private:
    string artista, titulo, genero;
    int lancamento;
    vector <string> faixa;
    vector <string> keyword;
    
public:

    //construtor vazio
    Midia();
    //destrutor
    ~Midia();

    //construtor
    Midia(const string &, const string &, const vector <string> &, 
    int, const string &, const vector <string> &);

/*-----------Encapsulamento-----------*/
    string getArtista() const;
    void setArtista(string &);

    string getTitulo() const;
    void setTitulo(string &);

    int getLancamento() const;
    void setLancamento(int);

    string getGenero() const;
    void setGenero(string &);

/*-----------Encapsulamento da collection faixa-----------*/
    const vector <string> getFaixas() const;
    void setFaixa(const vector <string> &);
    //bool getFaixa(string &);

/*-----------Encapsulamento da collection keyword-----------*/
    const vector <string> getKey() const;
    void setKey(const vector <string> &);

//funcao adicional
    void print();
};

#endif