#ifndef CLASE_TECA_H
#define CLASE_TECA_H
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "clase_pelicula.h"

using namespace std;


class VideoTeca {
    private:
        vector<Pelicula> listaPeliculas;

    public:
        // Metodo para agregar una pelicula a la videoteca
        void agregarPelicula(const Pelicula& pelicula);

        // Metodo para mostrar todas las peliculas en la videoteca
        void mostrarCatalogo();

        // Metodo para buscar una pelicula por titulo
        void buscarPelicula(const string& titulo);

        // Getter para obtener la lista de películas
        const vector<Pelicula>& getListaPeliculas() const;

        // Setter para modificar la lista de películas
        void setListaPeliculas(const vector<Pelicula>& nuevaLista);
};

void VideoTeca::agregarPelicula (const Pelicula& pelicula){
        listaPeliculas.push_back(pelicula);
}

void VideoTeca::mostrarCatalogo() {
    cout << "Peliculas en la videoteca:" << endl;
    for (auto& pelicula : listaPeliculas) {
        pelicula.imprimePelicula();
        cout << "-------------------------" << endl;
    }
}

void VideoTeca::buscarPelicula(const string& titulo) {
        bool encontrada = false;
        for (auto& pelicula : listaPeliculas) {
            if (pelicula.getTitulo() == titulo) {
                cout << "Pelicula encontrada: " << endl;
                pelicula.imprimePelicula();
                encontrada = true;
                break;
            }
        }

        if (!encontrada) {
            cout << "No se encontro ninguna pelicula con el titulo: " << titulo << endl;
        }
}

// Getter para obtener la lista de películas
const vector<Pelicula>& VideoTeca::getListaPeliculas() const {
    return listaPeliculas;
}

// Setter para modificar la lista de películas
void VideoTeca::setListaPeliculas(const vector<Pelicula>& nuevaLista) {
    listaPeliculas = nuevaLista;
}

#endif