#ifndef CLASE_MULTIMEDIA_H
#define CLASE_MULTIMEDIA_H
#include <iostream>

using namespace std;

class Multimedia {
    protected: //atributos de mi clase padre
        string titulo;
        int iD;
        string genero;
        
    
    public:
        //constructor
        Multimedia ();
        Multimedia (string _titulo, int _iD, string _genero);

        // getters:
        string getTitulo() const;
        int getID() const;
        string getGenero() const;

        //setters:
        void setTitulo(const string& _titulo);
        void setID(int);
        void setGenero(const string& _genero);

};

Multimedia::Multimedia(){
    titulo = "";
    iD = 0;
    genero = "";
}

Multimedia::Multimedia(string _titulo, int _iD, string _genero){
    titulo = _titulo;
    iD = _iD;
    genero = _genero;
}

//Getters:
string Multimedia::getTitulo() const{
    return titulo;
}

int Multimedia::getID() const{
    return iD;
}

string Multimedia::getGenero() const{
    return genero;
}

void Multimedia::setTitulo(const string& _titulo){
    titulo = _titulo;
}

void Multimedia::setID (int _iD){
    iD = _iD;
}

void Multimedia::setGenero (const string& _genero){
    genero = _genero;
}

#endif 