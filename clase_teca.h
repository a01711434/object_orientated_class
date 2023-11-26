#ifndef CLASE_TECA_H
#define CLASE_TECA_H

#include <iostream>
#include <string>
#include <vector>
#include "clase_pelicula.h"
#include "clase_musica.h"

using namespace std;

class VideoTeca {
private:
    vector<Pelicula> listaPeliculas;
    vector<Musica> listaCanciones;

public:
    // Método para agregar una película a la videoteca
    void agregarPelicula(const Pelicula& pelicula);

    // Método para mostrar todas las películas en la videoteca
    void mostrarCatalogoP();

    // Método para buscar una película por título
    void buscarPelicula(const string& titulo);

    // Getter para obtener la lista de películas
    const vector<Pelicula>& getListaPeliculas() const;

    // Setter para modificar la lista de películas
    void setListaPeliculas(const vector<Pelicula>& nuevaLista);

    // Método para agregar una canción a la videoteca
    void agregarCancion(const Musica& cancion);

    // Método para mostrar todas las canciones en la videoteca
    void mostrarCatalogoC();

    // Método para buscar una canción por título
    void buscarCancion(const string& titulo);

    // Getter para obtener la lista de canciones
    const vector<Musica>& getListaCanciones() const;

    // Setter para modificar la lista de canciones
    void setListaCanciones(const vector<Musica>& nuevaLista);
};

void VideoTeca::agregarPelicula(const Pelicula& pelicula) {
    listaPeliculas.push_back(pelicula);
}

void VideoTeca::mostrarCatalogoP() {
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

void VideoTeca::agregarCancion(const Musica& cancion) {
    listaCanciones.push_back(cancion);
}

void VideoTeca::mostrarCatalogoC() {
    cout << "Canciones en la videoteca:" << endl;
    for (auto& cancion : listaCanciones) {
        cancion.imprimirCancion();
        cout << "-------------------------" << endl;
    }
}

void VideoTeca::buscarCancion(const string& titulo) {
    bool encontrada = false;
    for (auto& cancion : listaCanciones) {
        if (cancion.getTitulo() == titulo) {
            cout << "Cancion encontrada: " << endl;
            cancion.imprimirCancion();
            encontrada = true;
            break;
        }
    }

    if (!encontrada) {
        cout << "No se encontro ninguna cancion con el titulo: " << titulo << endl;
    }
}

// Getter para obtener la lista de canciones
const vector<Musica>& VideoTeca::getListaCanciones() const {
    return listaCanciones;
}

// Setter para modificar la lista de canciones
void VideoTeca::setListaCanciones(const vector<Musica>& nuevaLista) {
    listaCanciones = nuevaLista;
}

#endif
