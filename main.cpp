#include <iostream>
#include <string>
#include <vector>
#include "clase_pelicula.h"
#include "clase_usuario.h"
#include "clase_multimedia.h"
#include "Ticket.h"
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
   Modificación 30 de nomviembre
*/

using namespace std;

int main() {
    vector<Musica> listaCanciones;
    vector<Usuario> listaUsuarios;
    vector<Pelicula> listaPeliculas;

    bool sigue = true;
    int opcion;
    while(sigue == true){
        cout << "Inserta 1 si quieres agregar un usuario" << endl;
        cout << "Inserta 2 si quieres agragar una cancion" << endl; 
        cout << "Inserta 3 si quieres agregar una pelicula " << endl;
        cout << "Inserta 4 si quieres imprimir la lista cancion " << endl; 
        cout << "Inserta 5 si quieres imprimir la lista de Usuarios " << endl; 
        cout << "Inserta 6 si quieres imprimir la lista de peliculas " << endl; 
        cout << "Inserta 7 si quieres salir del programa: " << endl;
        cin >> opcion;
        if(opcion == 1){
            bool crear_usuario = true;
            string nombre, nombre_usuario;
            int edad, crear_ticket;
            while (crear_usuario = true){
                cout << "Ingresa tu nombre: " << endl;
                cin >> nombre; 
                cout << "Ingresa tu edad: " << endl;
                cin >> edad;
                cout << "Ingresa tu nombre de usuario (sin espacios): " << endl;
                cin >> nombre_usuario;
                Usuario cliente (nombre,edad,nombre_usuario);
                listaUsuarios.push_back(cliente);

                cout << "Quieres crear un ticket con este usuario? (1 = si) (0 = no): " << endl;
                cin >> crear_ticket;
                if (crear_ticket == 1){
                    int iDTicket, diasRenta, i = 1;
                    iDTicket = i;
                    cout << "Ingresa los dias de renta: " << endl;
                    cin >> diasRenta;
                    Ticket t2(cliente,iDTicket,diasRenta);
                    cout << "El ticket es de: " << t2.getNombreUsuario() << ". Los dias de renta son: " << t2.getDiasRenta() << ". El ID del ticket es: " << t2.getIdTicket() << endl;                    
                } else {
                    break;
                } 
            }            
        }
        else if(opcion ==2){
            bool crea = true;
            string titulo, genero,cantante;
            int iD, i = 0;
            while(crea == true){
                
                int opcion;
                iD =i;
                cout <<"Ingrese titulo"<<endl;
                cin >> titulo;
                cout <<"Ingrese genero"<<endl;
                cin >> genero;
                cout <<"Ingrese cantante"<<endl;
                cin >> cantante;
                listaCanciones.push_back(Musica(titulo, iD, genero, cantante));

                i++;
                cout << "Quieres poner otra cancion? (1 = si, 0 = no)"<<endl;
                cin>> opcion;
                if(opcion == 0){
                    crea = false;
                }
            }

        }
        else if (opcion == 3){
            bool crea_pelicula = true;
            string titulo, genero,director;
            int iD, i = 0;
            while(crea_pelicula == true){
                
                int opcion;
                iD =i;
                cout <<"Ingrese titulo: "<<endl;
                cin >> titulo;
                cout <<"Ingrese genero: "<<endl;
                cin >> genero;
                cout <<"Ingrese director: "<<endl;
                cin >> director;
                listaPeliculas.push_back(Pelicula(titulo,iD,genero,director));

                i++;
                cout << "Quieres poner otra pelicula? (1 = si, 0 = no)"<<endl;
                cin>> opcion;
                if(opcion == 0){
                    crea_pelicula = false;
                }
            }
        }
        else if (opcion == 4){
            for (const auto& cancion : listaCanciones) {
                cout << "El titulo de la cancion es: "<<cancion.getTitulo() << ". El cantante de esa cancion es: " << cancion.getCantante() << endl;
            }
        }
        else if (opcion == 5){
            for (const auto& usuarios : listaUsuarios){
                cout << "El nombre del usuario es: " << usuarios.getNombre() << ". El nombre de usuario es: " << usuarios.getNombreUsuario() << ". La edad del usuario es: " << usuarios.getEdad() << endl;
            }
        }
        else if (opcion == 6){
            for (const auto& pelicula : listaPeliculas){
                cout << "El titulo de la película es: " << pelicula.getTitulo() << ". El director de la pelicula es: " << pelicula.getDirector() << endl;
            }
        }
        else if (opcion == 7){
            sigue = false;
        }
        else{
            cout <<"Opcion incorrecta"<< endl;
        }
    }
    
    return 0;
}
