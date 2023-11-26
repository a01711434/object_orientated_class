#ifndef CLASE_MUSICA_H
#define CLASE_MUSICA_H
#include <iostream>
#include "clase_multimedia.h"

using namespace std;

class Musica : public Multimedia {
    private: 
        string cantante;
    
    public:
        Musica();
        Musica(string _titulo, int _iD, string _genero, string _cantante);

        // getter
        string getCantante() const;
        //setter
        void setCantante(const string& _cantante);

        void imprimirCancion() const;

};

Musica::Musica(){
    cantante = "";
}

Musica::Musica(string _titulo, int _iD, string _genero, string _cantante) : Multimedia(_titulo, _iD, _genero) {
    cantante = _cantante;
}


string Musica::getCantante() const{
    return cantante;
}

void Musica::setCantante(const string& _cantante){
    cantante = _cantante;
}

void Musica::imprimirCancion() const{
    cout << "Titulo: " << titulo << endl;
    cout << "ID: " << iD << endl;
    cout << "Genero: " << genero << endl;
    cout << "Cantante: " << cantante << endl;
}

#endif