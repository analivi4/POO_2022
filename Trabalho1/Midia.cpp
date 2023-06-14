#include "header/Midia.h"
#include <bits/stdc++.h>

using namespace std;

//construtor vazio
Midia::Midia(){}

//destrutor
Midia::~Midia(){
    //cout << "Destruido!" << endl;
}

//construtor
Midia::Midia(const string &artista, const string &titulo, const vector <string> &faixa, 
    int lancamento, const string &genero, const vector <string> &keyword){

    this->artista = artista;
    this->titulo = titulo;
    this->faixa = faixa;
    this->lancamento = lancamento;
    this->genero = genero;
    this->keyword = keyword;
}

string Midia::getArtista() const{
    return artista;
}
void Midia::setArtista(string &artista){
    this->artista = artista;
}

string Midia::getTitulo() const{
    return titulo;
}
void Midia::setTitulo(string &titulo){
    this->titulo = titulo;
}

int Midia::getLancamento() const{
    return lancamento;
}

void Midia::setLancamento(int lancamento){
    this->lancamento = lancamento;
}

/*-----------Encapsulamento da collection faixa-----------*/
const vector <string> Midia::getFaixas() const{
    return faixa;
}
void Midia::setFaixa(const vector <string> &faixa){
    this->faixa = faixa;
}


string Midia::getGenero() const{
    return genero;
}
void Midia::setGenero(string &genero){
    this->genero = genero;
}

/*-----------Encapsulamento da collection keyword-----------*/
const vector <string> Midia::getKey() const{
    return keyword;
}
void Midia::setKey(const vector <string> &keyword){
    this->keyword = keyword;
}

//funcao adicional
void Midia::print(){
    cout << "Artista: " << getArtista() << endl;
    cout << "Titulo: " << getTitulo() << endl;

    cout << "Faixas: ";
    for(auto i : faixa)
        cout << i << endl;
    cout << endl;
    
    cout << "Lancamento: " << getLancamento() << endl;
    cout << "Genero: " << getGenero() << endl;

    cout << "Keywords: ";
    for(auto i : keyword)
       cout << i << ' ';
    cout << endl;
}