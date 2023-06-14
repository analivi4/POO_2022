#include "header/DVD.h"
#include <bits/stdc++.h>

using namespace std;

//construtor vazio
DVD::DVD(){}

//destrutor
DVD::~DVD(){
    //cout << "Destruído!" << endl;
}
//construtor
DVD::DVD(const vector <string> &formatoAudio, const vector <string> &formatoTela, const string &legenda,
const string &artista, const string &titulo, const vector <string> &faixa, 
int lancamento, const string &genero, const vector <string> &keyword) : Midia
(artista, titulo, faixa, lancamento, genero, keyword){

    this->formatoAudio = formatoAudio;
    this->formatoTela = formatoTela;
    this->legenda = legenda;
}

/*-----------Encapsulamento-----------*/
const vector <string> DVD::getFormatoAudio() const{
    return formatoAudio;
}
void DVD::setFormatoAudio(const vector <string> &formatoAudio){
    this->formatoAudio = formatoAudio;
}

const vector <string> DVD::getFormatoTela() const{
    return formatoTela;
}
void DVD::setFormatoTela(const vector <string> &formatoTela){
    this->formatoTela = formatoTela;
}

string DVD::getLegenda() const{
    return legenda;
}

void DVD::setLegenda(string &legenda){
    this->legenda = legenda;
}

//funcao adicional
void DVD::print(){

    cout << "Formato do audio: ";
    for(auto i : formatoAudio)
        cout << i << ' ';
    cout << endl;

    cout << "Formato da tela: ";
    for(auto i : formatoTela)
       cout << i << ' ';
    cout << endl;
    cout << "Legenda: " << getLegenda() << endl;
    
    //chamando funcao print da superclasse
    Midia::print();
}