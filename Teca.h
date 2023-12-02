#ifndef TECA_H
#define TECA_H
#include <iostream>
#include <vector>
#include "clase_usuario.h"
#include "clase_musica.h"
#include "clase_pelicula.h"

using namespace std;

class Teca {
    private: 
        // Atributos de tipo vector
        vector<Usuario> usuarios;
        vector<Pelicula> peliculas;
        vector<Musica> musica;
    public:
        Teca(){}; // Constructor por default
        //Constructor con parametros 
        Teca(vector<Usuario> usuario1, vector<Pelicula> pelicula1, vector<Musica> cancion){
            this-> usuarios = usuario1;
            this-> peliculas = pelicula1;
            this-> musica = cancion;
        }
        // getters
        vector<Usuario> getUsuario(){
            return usuarios;
        }
        vector<Pelicula> getPelicula(){
            return peliculas;
        }
        vector<Musica> getCancion(){
            return musica;
        }
        //setters
        void setUsuario(vector<Usuario> usuario1){
            this-> usuarios = usuario1;
        }
        void setPelicula(vector<Pelicula> pelicula1){
            this-> peliculas = pelicula1;
        }
        void setMusica(vector<Musica> cancion){
            this-> musica = cancion;
        }
        // metodo para agregar pelicula al vector
        void agregarPelicula(Pelicula& pelicula) {
            peliculas.push_back(pelicula);
        }
        // metodo para agregar cancion al vector
        void agregarCancion(Musica& cancion){
            musica.push_back(cancion);
        }
        // metodo para agregar usuario al vector
        void agregarUsuario(Usuario& usuario){
            usuarios.push_back(usuario);
        }
        //metodo para mostrar el catalogo de peliculas
        void mostrarCatalogoP() {
            cout << "Peliculas en la Teca:" << endl;
            for (auto& pelicula : peliculas) {
                pelicula.imprimePelicula();
                cout << "-------------------------" << endl;
            }
        }
        // metodo para mostrar el catalogo de canciones
        void mostrarCatalogoC() {
            cout << "Canciones en la Teca:" << endl;
            for (auto& cancion : musica) {
                cancion.imprimirCancion();
                cout << "-------------------------" << endl;
            }
        }
        // metodo para mostrar el catalogo de usuarios
        void mostrarCatalogoU (){
            cout << "Usuarios en la Teca: " << endl;
            for (auto& usuario : usuarios){
                usuario.imprimirUsuario();
                cout << "-------------------------" << endl;
            }
        }

};
#endif 