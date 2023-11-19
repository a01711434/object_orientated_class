#ifndef CLASE_USUARIOTECA_H
#define CLASE_USUARIOTECA_H

#include <iostream>
#include "clase_usuario.h"
#include <vector>


class UsuarioTeca : public Usuario {
    private:
        vector <Usuario> listaUsuarios;
    public:
        //Metodo para agregar un usuario a la videoTeca:
        void agregarUsuario(const Usuario& usuarios);

        //Metodo para mostrar todos los usuarios en la usuarioTeca:
        void mostrarUsuarios();

        //Metodo para buscar usuario por nombre
        void buscarUsuario (const string& nombre_usuario );

        //Getter para obtener la lista de usuarios:
        const vector<Usuario>& getListaUsuarios() const;

        // Setter para modificar la lista de usuarios:
        void setListaUsuarios (const vector<Usuario>& nuevoLista);
};

void UsuarioTeca::agregarUsuario(const Usuario& usuarios){
    listaUsuarios.push_back(usuarios);
}

void UsuarioTeca::mostrarUsuarios(){
    cout << "Usuarios en la usuarioTeca: " << endl;
    for (auto& usuarios : listaUsuarios){
        usuarios.imprimeUsuario();
        cout << "-----------------------" << endl;
    }
}

void UsuarioTeca::buscarUsuario(const string& nombreusuario){
    bool encontrada = false;
    for (auto& usuarios : listaUsuarios){
        if (usuarios.getNombre() == nombreusuario){
            cout << "Usuario encontrado: " << endl;
            usuarios.imprimeUsuario();
            encontrada=true;
            break;
        }
    }

    if (!encontrada){
        cout << "No se encontro el usuario"<< endl;
    }
}

const vector<Usuario>& UsuarioTeca::getListaUsuarios() const{
    return listaUsuarios;
}

void UsuarioTeca::setListaUsuarios(const vector<Usuario>& nuevoLista){
    listaUsuarios = nuevoLista;
}

#endif