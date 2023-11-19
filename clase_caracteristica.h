#ifndef CLASE_GENERO_H
#define CLASE_GENERO_H

#include <iostream>
#include <string>

using namespace std;

class Genero {
private:
    // Atributos
    string categoriaGenero;

public:
    // Constructores
    Genero();
    Genero(string _genero);

    // Getter
    string getCategoria() const;

    // Setter
    void setCategoria(const string& _genero);
};

Genero::Genero() {
    categoriaGenero = "";
}

Genero::Genero(string _genero) {
    categoriaGenero = _genero;
}

// Getter
string Genero::getCategoria() const {
    return categoriaGenero;
}

// Setter
void Genero::setCategoria(const string& _genero) {
    categoriaGenero = _genero;
}

#endif
