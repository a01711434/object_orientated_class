#ifndef CLASE_PELICULA_H
#define CLASE_PELICULA_H

#include <iostream>
#include "clase_caracteristica.h"

using namespace std;

class Pelicula : public Genero {
    private:
        // Atributos adicionales de Pelicula
        string titulo;
        string director;
        int iD;

    public:
        // Constructores
        Pelicula();
        Pelicula(string ti, string di, int id, string _genero);

        // Métodos
        void imprimePelicula() const;

        // Getters y Setters adicionales de Pelicula
        string getTitulo() const;
        string getDirector() const;
        int getiD() const;
        void setTitulo(const string& ti);
        void setDirector(const string& di);
        void setID(int id);
};

Pelicula::Pelicula() : Genero() {
    titulo = "";
    director = "";
    iD = 0;
}

Pelicula::Pelicula(string ti, string di, int id, string _genero) : Genero(_genero) {
    titulo = ti;
    director = di;
    iD = id;
}

// Métodos adicionales de Pelicula
void Pelicula::imprimePelicula() const {
    cout << "Titulo: " << titulo << endl;
    cout << "Director: " << director << endl;
    cout << "ID: " << iD << endl;
    cout << "Genero: " << getCategoria() << endl;
}

// Getters y Setters adicionales de Pelicula
string Pelicula::getTitulo() const {
    return titulo;
}

string Pelicula::getDirector() const {
    return director;
}

int Pelicula::getiD() const {
    return iD;
}

void Pelicula::setTitulo(const string& ti) {
    titulo = ti;
}

void Pelicula::setDirector(const string& di) {
    director = di;
}

void Pelicula::setID(int id) {
    iD = id;
}

#endif
