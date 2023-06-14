#include "header/Midia.h"
#include "header/CD.h"
#include "header/DVD.h"
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

void cadastrarMidia(vector <Midia*> &midia, vector <CD*> &cd, vector <DVD*> &dvd){
    int opcao;
    string artista, titulo, genero, legenda;
    vector <string> faixa, formatoAudio, formatoTela, keyword;
    int lancamento, duracao;
    float volume;
    bool coletanea = false;

    cout << "Digite 1 para CD ou 2 para DVD: ";
    cin >> opcao;

    if(opcao == 1){
        cout << "Digite o artista: " << endl;
        cin.ignore();
        getline(cin, artista);
        cout << "Digite o titulo: " << endl;
        getline(cin, titulo);
        cout << "Digite o genero: ";
        cin >> genero;
        cout << "Digite a lancamento: ";
        cin >> lancamento;
        cout<< "Digite núemero de faixas: ";
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            string aux;
            cout << "Digite a faixa " << i << ": ";
            cin.ignore();
            getline(cin, aux);
            faixa.push_back(aux);
        }
        cout << "Digite as keywords:";
        while (cin.get() != '\n')
        {
            string aux;
            cin>>aux;
            keyword.push_back(aux);
        } 
        cout << "Digite a duracao: ";
        cin >> duracao;
        cout << "Digite o volume: ";
        cin >> volume;
        cout << "Digite a coletanea: ";
        cin >> coletanea;
        cd.push_back(new CD(duracao, volume, coletanea, artista, titulo, faixa, lancamento, genero, keyword));
        midia.push_back(new CD(duracao, volume, coletanea, artista, titulo, faixa, lancamento, genero, keyword));
    }
    else if(opcao == 2){
        cout << "Digite o artista: "<< endl;
        cin.ignore();
        getline(cin, artista);
        cout << "Digite o titulo: " << endl;
        getline(cin, titulo);
        cout << "Digite o genero: ";
        cin >> genero;
        cout << "Digite a lancamento: ";
        cin >> lancamento;
        cout<< "Digite núemero de faixas:";
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            string aux;
            cout << "Digite a faixa " << i << ": ";
            cin.ignore();
            getline(cin, aux);
            faixa.push_back(aux);
        }
        cout << "Digite keywords:";
        while (cin.get() != '\n')
        {
            string aux;
            cin >> aux;
            keyword.push_back(aux);
        }   
        cout << "Digite o formatos do audio:";
        while(cin.get() != '\n'){
            string aux;
            cin >> aux;
            formatoAudio.push_back(aux);
        }
        cout << "Digite o formatos da tela:";
        while(cin.get() != '\n'){
            string aux;
            cin >> aux;
            formatoTela.push_back(aux);
        }
        cout << "Digite a legenda: ";
        cin >> legenda;

        dvd.push_back(new DVD(formatoAudio, formatoTela, legenda, artista, titulo, faixa, lancamento, genero, keyword));
        midia.push_back(new DVD(formatoAudio, formatoTela, legenda, artista, titulo, faixa, lancamento, genero, keyword));
    }
    else{
        cout << "Opção invalida!" << endl;
    }
}

void exibirMidias(vector <Midia*> &midia){
    string artista;
    cout << "Digite o artista: ";
    cin.ignore();
    getline(cin, artista);
    sort(midia.begin(), midia.end(), [](Midia* a, Midia* b){
        return a->getLancamento() < b->getLancamento();
    });
    for(auto i : midia){
        if(i->getArtista() == artista){{
                cout << i->getTitulo() << " - "<< i->getLancamento() << endl;
            }
        }
    }
}

void exibirCDs(vector <CD*> &cd){
    string artista;
    cout << "Digite o artista: ";
    cin.ignore();
    getline(cin, artista);
    sort(cd.begin(), cd.end(), [](CD* a, CD* b){
        return a->getLancamento() < b->getLancamento();
    });
    for(auto i : cd){
        if(i->getArtista() == artista){
            cout << i->getTitulo() << " - " << i->getLancamento() << endl;
        }
    }
}

void exibirDVDs(vector <DVD*> &dvd){
    string artista;
    cout << "Digite o artista: ";
    cin.ignore();
    getline(cin, artista);
    sort(dvd.begin(), dvd.end(), [](DVD* a, DVD* b){
        return a->getLancamento() < b->getLancamento();
    });
    for(auto i : dvd){
        if(i->getArtista() == artista){
            cout << i->getTitulo() << " - " << i->getLancamento() << endl;
        }
    }
}

void exibirMidiasPorAno(vector <Midia*> &midia){
    int ano;
    cout << "Digite o ano: ";
    cin >> ano;
    sort(midia.begin(), midia.end(), [](Midia* a, Midia* b){
        return a->getTitulo() < b->getTitulo();
    });
    for(auto i : midia){
        if(i->getLancamento() == ano){
            cout << i->getTitulo() << " by." << i->getArtista() << endl;
        }
    }
}

void exibirMidiasPorGenero(vector <CD*> &cd, vector <DVD*> &dvd){
    string genero;
    cout << "Digite o genero: ";
    cin >> genero;
    cout << "DVDs: " << endl;
    for(auto i : dvd){
        if(i->getGenero() == genero){
            cout << i->getTitulo() << "by. " << i->getArtista() << endl;
        }
    }
    cout << "CDs: " << endl;
    for(auto i : cd){
        if(i->getGenero() == genero){
            cout << i->getTitulo() << " by." << i->getArtista() << endl;
        }
    }
    
}

void exibirKeywordsSemRepeticao(vector <Midia*> &midia){
    vector <string> aux;
    for(auto i : midia){
        for(auto j : i->getKey()){
            aux.push_back(j);
        }
    }
    sort(aux.begin(), aux.end());
    aux.erase(unique(aux.begin(), aux.end()), aux.end());
    for(auto i : aux){
        cout << i << endl;
    }
}

void exibirFaixasEmComum(vector <CD*> &cd, vector <DVD*> &dvd){
    string tituloCD, tituloDVD, artista;
    cout << "Digite o titulo do CD: ";
    cin.ignore();
    getline(cin, tituloCD);
    cout << "Digite o titulo do DVD: ";
    getline(cin, tituloDVD);
    cout << "Digite o artista: ";
    getline(cin, artista);
    for(auto i : cd){
        if(i->getTitulo() == tituloCD && i->getArtista() == artista){
            for(auto j : dvd){
                if(j->getTitulo() == tituloDVD && j->getArtista() == artista){
                    vector <string> aux;
                    for(auto k : i->getFaixas()){
                        for(auto l : j->getFaixas()){
                            if(k == l){
                                aux.push_back(k);
                            }
                        }
                    }
                    cout<< endl;
                    cout << "Faixas em comum: " << endl;
                    for(auto k : aux){
                        cout << k << endl;
                    }
                    cout << endl;
                    cout << "Faixas só no CD: " << endl;
                    for(auto k : i->getFaixas()){
                        if(find(aux.begin(), aux.end(), k) == aux.end()){
                            cout << k << endl;
                        }
                    }
                    cout << endl;
                    cout << "Faixas só no DVD: " << endl;
                    for(auto k : j->getFaixas()){
                        if(find(aux.begin(), aux.end(), k) == aux.end()){
                            cout << k << endl;
                        }
                    }
                }
            }
        }
    }
}

void mostrarMidiaPorTitulo(vector <DVD*> &dvd, vector <CD*> &cd, vector <Midia*> &midia){
    string titulo;
    cout << "Digite o titulo: ";
    cin.ignore();
    getline(cin, titulo);
    cout<< endl;
    for(auto i : cd){
        if(i->getTitulo() == titulo){
            i->print();
        }
    }
    cout<< endl;
    for(auto i : dvd){
        if(i->getTitulo() == titulo){
            
            
        }
    }
}

void mostrarMidias()

void excluiMidiaPorTitulo(vector <Midia*> &midia, vector <CD*> &cd, vector <DVD*> &dvd){
    string titulo;
    cout << "Digite o titulo: ";
    cin.ignore();
    getline(cin, titulo);
    for(auto i = midia.begin(); i != midia.end(); i++){
        if((*i)->getTitulo() == titulo){
            midia.erase(i);
        }
    }
    for(auto i = cd.begin(); i != cd.end(); i++){
        if((*i)->getTitulo() == titulo){
            cd.erase(i);
        }
    }
    for(auto i = dvd.begin(); i != dvd.end(); i++){
        if((*i)->getTitulo() == titulo){
            dvd.erase(i);
        }
    }
}

int main(){
    
    CD cd1(47, 1.0f, false, "Beyonce", "Lemonade", {"Pray You Catch Me", "Hold Up", "Don't Hurt Yourself", "Sorry", "6 Inch", "Daddy Lessons", "Love Drought", "Sandcastles", "Forward", "Freedom", "All Night", "Formation"}, 2016, "Pop",{"Pop-CD", "Cd-R&B"});
    CD cd2(4, 2.0f, true, "Ariana Grande", "Positions", {"positions", "Obvious"}, 2020, "pop", {"pop-CD"});
    CD cd3(1, 1.0f, false, "Ariana Grande", "Thank U, Next", {"thank u, next", "7 rings", "break up with your girlfriend, i'm bored"}, 2019, "pop", {"pop-CD"});
    CD cd0(59, 1.0f, true, "Beyonce", "I Am... Sasha Fierce", {"If I were a boy", "Halo", "Ave maria"}, 2008, "Pop", {"Pop-CD", "Cd-R&B"});
    CD cd4(48, 1.0f, false, "Rihanna", "Loud", {"S&M", "What's My Name?", "Cheers (Drink to That)"}, 2010, "Pop", {"Pop-CD", "Cd-R&B"});
    CD cd5(45, 1.0f, false, "Rihanna", "Anti", {"Work", "Needed Me", "Love On The Brain"}, 2016, "Pop", {"Pop-CD", "Cd-R&B"});
    CD cd6(1, 1.0f, false, "Rihanna", "Unapologetic", {"Diamonds", "Stay", "Numb"}, 2012, "Pop", {"Pop-CD", "Cd-R&B"});

    DVD dvd1({"mp4", "mkv"}, {"16x9", "4x3"}, "legenda-01", "Beyonce", "Lemonade", {"Pray You Catch Me", "Hold Up", "Don't Hurt Yourself", "All Night", "Formation", "Crazy in Love"}, 2016, "Pop", {"Pop-DVD", "DVD-R&B"
    });
    DVD dvd2({"mp4"}, {"16x9"}, "legenda-02", "Ariana Grande", "Sweetener", {"Sweetener", "Successful"}, 2018, "pop", {"pop-DVD"});
    DVD dvd3({"mp4", "mkv"}, {"16x9", "4x3"}, "legenda-03", "Beyonce", "Homecoming", {"Crazy in love", "Pray You Catch Me", "Hold Up", "Don't Hurt Yourself", "All Night", "Formation"}, 2019, "Pop", {"Pop-DVD", "DVD-R&B", "DVD-Documentario"});
    
    vector <Midia*> midia{&cd1, &cd2, &cd3, &cd4, &cd5, &cd6, &dvd1, &dvd2, &dvd3};
    vector <CD*> cd{&cd1, &cd2, &cd3, &cd4, &cd5, &cd6, &cd0};
    vector <DVD*> dvd{&dvd1, &dvd2, &dvd3};

    int opcao;

    do
    {   cout<<"---------------------  MENU  ----------------------------"<<endl;
        cout<<"1 - Cadastrar midia"<<endl;
        cout<<"2 - Exibir midias de um artista"<<endl;
        cout<<"3 - Exibir CDs de um artista"<<endl;
        cout<<"4 - Exibir DVDs de um artista"<<endl;
        cout<<"5 - Exibir midias de um ano"<<endl;
        cout<<"6 - Exibir CDs e DVDs de um genero:"<<endl;
        cout<<"7 - Exibir keywords:"<<endl;
        cout<<"8 - Exibir faixas em comum de CD e DVD:"<<endl;
        cout<<"0 - Sair"<<endl;

        cout<<"Digite a opcao desejada: ";
        cin>>opcao;

        switch(opcao)
        {
            case 1:
                cout<<"----------------------------------------------------"<<endl;
                cadastrarMidia(midia, cd, dvd);
                cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 2:
                cout<<"----------------------------------------------------"<<endl;
                exibirMidias(midia);
                cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 3:
                cout<<"----------------------------------------------------"<<endl;
                exibirCDs(cd);
                cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 4:
                cout<<"----------------------------------------------------"<<endl;
                exibirDVDs(dvd);
                cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 5:
                cout<<"----------------------------------------------------"<<endl;
                exibirMidiasPorAno(midia);
                cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 6:
                cout<<"----------------------------------------------------"<<endl;
                exibirMidiasPorGenero(cd, dvd);
                cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 7:
                cout<<"----------------------------------------------------"<<endl;
                exibirKeywordsSemRepeticao(midia);
                cout<<"----------------------------------------------------"<<endl;
                break;
            case 8:
                cout<<"----------------------------------------------------"<<endl;
                exibirFaixasEmComum(cd, dvd);
                cout<<"----------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 9:
                cout<<"Programa encerrado"<<endl;
                break;
            default:
                cout<<"Opcao invalida!"<<endl;
        }
    } while (opcao != 0);
    

    return 0;


}