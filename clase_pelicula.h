#ifndef CLASE_PELICULA_H
#define CLASE_PELICULA_H
#include <iostream>
#include <vector>
#include <string>


using namespace std;

// Primera clase //
// ================================================== //
class Pelicula {

    private:
    //Atributos
        string titulo;
        string director;
        int ID;


    public:
   //Constructor por omisión:
    Pelicula ();
    Pelicula (string ti, string di, int id);

    // Getter
    string getTitulo () ;
    string getDirector();
    int getID () ;

    //Setter
    void setTitulo (string ti);
    void setDirector (string di);
    void setID (int id);

    //Metodos:
    void imprimePelicula () ;


};

//Constructor por omisión default:

Pelicula::Pelicula (){
    titulo = "";
    director = "";
    ID = 0;
}

Pelicula::Pelicula (string ti, string di, int id){
    titulo = ti;
    director = di;
    ID = id;
}

// Getter:
string Pelicula::getTitulo () {
    return titulo;
}

string Pelicula::getDirector (){
    return director;
}

int Pelicula::getID (){
    return ID;
}

//Setter:
void Pelicula::setTitulo (string ti){
    titulo = ti;
}

void Pelicula::setDirector(string di){
    director = di;
}

void Pelicula::setID (int id){
    ID = id;
}

void Pelicula::imprimePelicula() {
    cout << "El titulo de la pelicula es: " << titulo << endl;
    cout << "El director de la pelicula es: " << director << endl;
    cout << "El id de la pelicula es: " << ID << endl;
}

#endif // CLASE_PELICULA_H
