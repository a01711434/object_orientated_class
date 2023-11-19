#include <iostream>
#include <string>
#include <vector>
#include "clase_pelicula.h"
#include "clase_usuario.h"
#include "clase_teca.h"
#include "clase_caracteristica.h"
#include "clase_usuarioTeca.h"

/*El problema a abordar es la gestión efectiva de un negocio de alquiler de películas. Esto implica llevar un registro preciso de las películas disponibles en el catálogo, el estado (si se encuentra en el cátalogo o no) y la información de los clientes.

Catálogo de Películas: Permite visualizar y encontrar en el cátalogo una película.
Agregar Películas: Permite a los usuarios agregar nuevas películas al catálogo, ingresando detalles como título, director y ID.
Registro de Clientes: Permite agregar nuevos clientes al sistema, incluyendo su información.

Alejandra Arredondo - A01711434
Creación 2 de noviembre
Modificación 17 de noviembre
*/

using namespace std;

int main() {
    int numPeliculas;

    cout << "Cuantas peliculas quieres crear? ";
    cin >> numPeliculas;

    cin.ignore(); // Limpiar el buffer de entrada después de leer el número de películas

    vector<Pelicula> peliculas;

    for (int i = 0; i < numPeliculas; ++i) {
        string titulo, director, categoriaGenero;
        int iD;

        cout << "Escribe el titulo de la pelicula: ";
        getline(cin, titulo);

        cout << "Escribe el nombre del director de la pelicula: ";
        getline(cin, director);

        cout << "Escribe el ID de la pelicula: ";
        cin >> iD;

        cin.ignore(); // Limpiar el buffer después de leer el ID

        cout << "Escribe el genero de la pelicula: ";
        getline(cin, categoriaGenero);

        cout << "---------------------------------------" << endl;

        // Crear una instancia de Pelicula, que hereda de Genero
        Pelicula pelicula(titulo, director, iD, categoriaGenero);
        peliculas.push_back(pelicula);
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

        cin.ignore(); // Limpiar el buffer después de leer la edad

        cout << "Escribe tu nombre de usuario: ";
        getline(cin, nombreUsuario);

        cout << "-----------------------------------" << endl;

        Usuario usuario(nombreCompleto, edad, nombreUsuario);
        usuarios.push_back(usuario); // Añadir el usuario al vector

    }

    // Crear una instancia de VideoTeca
    VideoTeca miVideoTeca;

    // Agregar todas las películas al catálogo de la VideoTeca
    for (const auto& pelicula : peliculas) {
        miVideoTeca.agregarPelicula(pelicula);
    }

    // Mostrar el catálogo de la VideoTeca
    miVideoTeca.mostrarCatalogo();

    // Buscar una película por título en la VideoTeca
    string tituloBuscar;
    cin.ignore(); // Limpiar el buffer después de leer el nombre de usuario
    cout << "Escribe el titulo de la pelicula a buscar: ";
    getline(cin, tituloBuscar);
    miVideoTeca.buscarPelicula(tituloBuscar);

    // Crear una instancia de UsuarioTeca:
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
