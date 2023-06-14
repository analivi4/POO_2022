#include "header/CD.h"
#include <bits/stdc++.h>

//construtor vazio
CD::CD(){}

//destrutor
CD::~CD(){
    //cout << "Destuido!" << endl;
}
//construtor
CD::CD(int duracao, float volume, bool coletanea, 
const string &artista, const string &titulo, const vector <string> &faixa, 
int lancamento, const string &genero, const vector <string> &keyword) : Midia
(artista, titulo, faixa, lancamento, genero, keyword){

    this->duracao = duracao;
    this->volume = volume;
    this->coletanea = coletanea;
}

/*-----------Encapsulamento-----------*/
int CD::getDuracao() const{
    return duracao;
}
void CD::setDuracao(int duracao){
    this->duracao = duracao;
}

float CD::getVolume() const{
    return volume;
}
void CD::setVolume(float volume){
    this->volume = volume;
}

bool CD::getColetanea() const{
    return coletanea;

}
void CD::setColetanea(bool coletanea){
    this->coletanea = coletanea;
}

//funcao adicional
void CD::print(){

    std::cout << "Duracao: " << getDuracao() << std::endl;
    std::cout << "Volume: " << getVolume() << std::endl;
    std::cout << "Coletanea: " << getColetanea() << std::endl;
    //chamando funcao print da superclasse
    Midia::print();
}