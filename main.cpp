#include <iostream>
#include <string>
#include <vector>
#include "clase_pelicula.h"
#include "clase_usuario.h"
#include "clase_teca.h"

using namespace std;

int main() {
    // Crear una instancia de Pelicula
    string titulo;
    string director;
    int ID;

    cout << "Escribe el titulo de la pelicula: ";
    getline(cin, titulo);

    cout << "Escribe el nombre del director de la pelicula: ";
    getline(cin, director);

    cout << "Escribe el ID de la pelicula: ";
    cin >> ID;

    Pelicula pelicula(titulo, director, ID);

    // Crear una instancia de Usuario
    string nombreCompleto;
    int edad;
    string nombreUsuario;

    cin.ignore(); // Limpia el buffer del newline dejado por cin >> ID
    cout << "Escribe tu nombre completo: ";
    getline(cin, nombreCompleto);

    cout << "Escribe tu edad: ";
    cin >> edad;

    cout << "Escribe tu nombre de usuario: ";
    cin >> nombreUsuario;

    Usuario usuario1(nombreCompleto, edad, nombreUsuario);
    usuario1.imprimeUsuario();

    // Crear una instancia de VideoTeca
    VideoTeca miVideoTeca;

    // Agregar la pelicula a la VideoTeca
    miVideoTeca.agregarPelicula(pelicula);

    // Mostrar el catalogo de la VideoTeca
    miVideoTeca.mostrarCatalogo();

    // Buscar una pelicula por titulo en la VideoTeca
    string tituloBuscar;
    cin.ignore(); // Limpia el buffer del newline dejado por cin >> nombreUsuario
    cout << "Escribe el titulo de la pelicula a buscar: ";
    getline(cin, tituloBuscar);
    miVideoTeca.buscarPelicula(tituloBuscar);

    return 0;
}


