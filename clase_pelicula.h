#ifndef CLASE_PELICULA_H
#define CLASE_PELICULA_H
#include <iostream>
#include "clase_multimedia.h"

using namespace std;

class Pelicula : public Multimedia {
    private: 
        string director;
    public:
        // Constructores
        Pelicula();
        Pelicula(string _titulo, int _iD, string _genero, string _director);

        // Métodos
        void imprimePelicula() const;

        // getter 
        string getDirector() const ;
        void setDirector (const string&  _director);
};

Pelicula::Pelicula() : Multimedia() {
    director = "";
}

Pelicula::Pelicula(string _titulo, int _iD, string _genero, string _director) : Multimedia( _titulo,  _iD,  _genero) {
    director = _director;
}

// Métodos adicionales de Pelicula
void Pelicula::imprimePelicula() const {
    cout << "Titulo: " << titulo << endl;
    cout << "Director: " << director << endl;
    cout << "ID: " << iD << endl;
    cout << "Genero: " << getGenero() << endl;
}

string Pelicula::getDirector()const{
    return director;
}

void Pelicula::setDirector(const string& _director){
    director = _director;
}


#endif
