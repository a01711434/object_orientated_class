#ifndef CLASE_USUARIO_H
#define CLASE_USUARIO_H
// ====================================================================================================================================
// Segunda clase:
#include <iostream>
#include <string>

using namespace std;

class Usuario {
    private:
    // Atributos
        string nombre;
        int edad;
        string nombre_usuario;

    public:
    // Constructor por omisión
        Usuario ();
        Usuario (string renombre, int años, string cliente);

    // Getter
    string getNombre ();
    int getEdad();
    string getNombreUsuario ();

    //Setter
    void setNombre (string renombre);
    void setEdad(int años);
    void setUsuario (string cliente);

    //Metodos
    void imprimeUsuario();

};

//Constructor por omisión default
Usuario::Usuario (){
    nombre = "";
    edad = 0;
    nombre_usuario = "";
}

Usuario::Usuario (string renombre,int años, string cliente){
    nombre = renombre;
    edad = años;
    nombre_usuario = cliente;
}

//getter
string Usuario::getNombre(){
    return nombre;
}

int Usuario::getEdad (){
    return edad;
}

string Usuario::getNombreUsuario(){
    return nombre_usuario;
}

//setter
void Usuario::setNombre (string renombre){
    nombre = renombre;
}

void Usuario::setEdad(int años) {
    edad = años;
}

void Usuario::setUsuario(string cliente){
    nombre_usuario = cliente;
}

void Usuario::imprimeUsuario(){
    cout << "Tu nombre es: " << nombre << endl;
    cout << "Tu edad es: " << edad << "anos" << endl;
    cout << "Tu nombre de usuario es: " << nombre_usuario << endl;

}

#endif
