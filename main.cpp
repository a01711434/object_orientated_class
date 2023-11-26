#include <iostream>
#include <string>
#include <vector>
#include "clase_pelicula.h"
#include "clase_usuario.h"
#include "clase_teca.h"
#include "clase_multimedia.h"
#include "clase_usuarioTeca.h"
#include "clase_musica.h"

/*
   El problema a abordar es la gestión efectiva de un negocio de alquiler de películas.
   Esto implica llevar un registro preciso de las películas disponibles en el catálogo,
   el estado (si se encuentra en el catálogo o no) y la información de los clientes.

   Catálogo de Películas: Permite visualizar y encontrar en el catálogo una película.
   Agregar Películas: Permite a los usuarios agregar nuevas películas al catálogo,
   ingresando detalles como título, director y ID.
   Registro de Clientes: Permite agregar nuevos clientes al sistema, incluyendo su información.

   Alejandra Arredondo - A01711434
   Creación 2 de noviembre
   Modificación 17 de noviembre
   Modificación 25 de noviembre
*/

using namespace std;

int main() {
    //Crear un vector con peliculas preexistentes:
    vector<Pelicula> peliculasPree = {
        Pelicula("Titanic", 1 ," romance" , " James Cameron"),
        Pelicula ("El padrino", 2 ," accion" , " Francis Ford"),
        Pelicula("Interestella", 3 ," accion" , " Christopher Nola"),
        Pelicula("Man of Steel", 4 ," accion" , " Zack Snyder"),
        Pelicula("Star Treck", 5 , " accion" , " J. J. Abrams"),
        Pelicula ("Star Wars: Episode Iv" , 6 , " ciencia ficcion" , " George Lucas"),
        Pelicula("Passengers" , 7 , " romance y accion" , "Morten Tyldum"),
        Pelicula("Wall-E" , 8 , " Aventura" , " Andrew Stanton"),
        Pelicula("Los Increibles" , 9 ," accion" , " Jason Lee"),
        Pelicula ("Matrix" , 10 , " Ciencia ficcion " , " Lana Wachoswki" ),
    };

    vector<Pelicula> peliculas = peliculasPree;

    int numPeliculas;

    cout << "Cuantas peliculas quieres crear? ";
    cin >> numPeliculas;

    cin.ignore(); // Limpiar el buffer de entrada despues de leer el numero de peliculas


    for (int i = 0; i < numPeliculas; ++i) {
        string titulo, director, genero;
        int iD;

        cout << "Escribe el titulo de la pelicula: ";
        getline(cin, titulo);

        cout << "Escribe el nombre del director de la pelicula: ";
        getline(cin, director);

        cout << "Escribe el ID de la pelicula: ";
        cin >> iD;

        cin.ignore(); // Limpiar el buffer despues de leer el ID

        cout << "Escribe el genero de la pelicula: ";
        getline(cin, genero);

        cout << "---------------------------------------" << endl;

        // Crear una instancia de Pelicula, que hereda de Multimedia
        Pelicula pelicula(titulo, iD, genero, director);
        peliculas.push_back(pelicula);
    }

    vector<Musica> cancionesPree = {
        Musica ("Shakira:BZRP", 1 , "Dance-pop", "Bizarrap & Shakira"),
        Musica ("Primera cita", 27 , "Regional" , " Carin Leon "),
        Musica ("Ella baila sola" , 15 , " Musica latina " , " Eslabon Armado & Peso Pluma "),
        Musica ("TQG", 28 , " Musica latina " , "Karol G & Sakira "),
        Musica ("Desafiando al destino" , 26 , " balada " , " Maria Becerra "),

    };

    vector<Musica> canciones = cancionesPree; //inicializamos el vector con cancionesPree
    // Añadir al vector canciones
    int numCanciones;

    cout << "Cuantas canciones quieres crear? ";
    cin >> numCanciones;

    cin.ignore(); // Limpiar el buffer de entrada despues de leer el numero de canciones


    for (int i = 0; i < numCanciones; ++i) {
        string titulo, cantante, genero;
        int iD;

        cout << "Escribe el titulo de la cancion: ";
        getline(cin, titulo);

        cout << "Escribe el nombre del cantante de la cancion: ";
        getline(cin, cantante);

        cout << "Escribe el ID de la cancion: ";
        cin >> iD;

        cin.ignore(); // Limpiar el buffer despues de leer el ID

        cout << "Escribe el genero de la cancion: ";
        getline(cin, genero);

        cout << "---------------------------------------" << endl;

        // Crear una instancia de Musica, que hereda de Multimedia
        Musica cancion(titulo, iD, genero, cantante);
        canciones.push_back(cancion);
    }

    // Crear una instancia de Usuario
    int numUsuarios;
    cout << "Cuantos usuarios quieres anadir?: ";
    cin >> numUsuarios;

    cin.ignore();

    vector<Usuario> usuarios;

    for (int i = 0; i < numUsuarios; ++i) {
        string nombreCompleto, nombreUsuario;
        int edad;

        cout << "Escribe tu nombre completo: ";
        getline(cin, nombreCompleto);

        cout << "Escribe tu edad: ";
        cin >> edad;

        cin.ignore(); // Limpiar el buffer despues de leer la edad

        cout << "Escribe tu nombre de usuario: ";
        getline(cin, nombreUsuario);

        cout << "-----------------------------------" << endl;

        Usuario usuario(nombreCompleto, edad, nombreUsuario);
        usuarios.push_back(usuario); // Añadir el usuario al vector
    }

    // Crear una instancia de VideoTeca
    VideoTeca miVideoTeca;

    // Agregar todas las peliculas al catalogo de la VideoTeca
    for (const auto& pelicula : peliculas) {
        miVideoTeca.agregarPelicula(pelicula);
    }

    // Mostrar el catalogo de la VideoTeca
    miVideoTeca.mostrarCatalogoP();

    for (const auto& cancion : canciones){
        miVideoTeca.agregarCancion(cancion);
    }

    miVideoTeca.mostrarCatalogoC();

    // Buscar una pelicula por titulo en la VideoTeca
    string tituloBuscar;
    cin.ignore(); // Limpiar el buffer despues de leer el nombre de usuario
    cout << "Escribe el titulo de la pelicula a buscar: ";
    getline(cin, tituloBuscar);
    miVideoTeca.buscarPelicula(tituloBuscar);

    // Buscar una cancion por titulo en la VideoTeca
    string tituloCancion;
    cin.ignore();
    cout << "Escribe el titulo de la cancion a buscar: ";
    getline(cin, tituloCancion);
    miVideoTeca.buscarCancion(tituloCancion);

    // Crear una instancia de UsuarioTeca
    UsuarioTeca miUsuarioTeca;

    for (const auto& usuario : usuarios) {
        miUsuarioTeca.agregarUsuario(usuario);
    }

    miUsuarioTeca.mostrarUsuarios();

    string usuarioBuscar;
    cin.ignore();
    cout << "Escribe el nombre del usuario: ";
    getline(cin, usuarioBuscar);
    miUsuarioTeca.buscarUsuario(usuarioBuscar);

    return 0;
}
