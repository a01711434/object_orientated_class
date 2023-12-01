#ifndef CLASE_USUARIO_H
#define CLASE_USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario {
private:
    string nombre;
    int edad;
    string nombre_usuario;

public:
    Usuario();
    Usuario(string renombre, int anos, string cliente);

    string getNombre() const;
    int getEdad() const;
    string getNombreUsuario() const;

    void setNombre(string renombre);
    void setEdad(int anos);
    void setUsuario(string cliente);

    void imprimeUsuario() const;
};

Usuario::Usuario() {
    nombre = "";
    edad = 0;
    nombre_usuario = "";
}

Usuario::Usuario(string renombre, int anos, string cliente) {
    nombre = renombre;
    edad = anos;
    nombre_usuario = cliente;
}

string Usuario::getNombre() const {
    return nombre;
}

int Usuario::getEdad() const {
    return edad;
}

string Usuario::getNombreUsuario() const {
    return nombre_usuario;
}

void Usuario::setNombre(string renombre) {
    nombre = renombre;
}

void Usuario::setEdad(int anos) {
    edad = anos;
}

void Usuario::setUsuario(string cliente) {
    nombre_usuario = cliente;
}

void Usuario::imprimeUsuario() const {
    cout << "Tu nombre es: " << nombre << endl;
    cout << "Tu edad es: " << edad << " años" << endl;
    cout << "Tu nombre de usuario es: " << nombre_usuario << endl;
}

#endif
