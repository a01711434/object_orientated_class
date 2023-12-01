#ifndef TICKET_H
#define TICKET_H
#include <iostream>
#include "clase_usuario.h"
#include <vector>


class Ticket : public Usuario {
    private:
        int iDTicket;
        int diasRenta;
        Usuario cliente;


    public:
        Ticket();
        Ticket(Usuario c, int idTic, int diasRenta);
        int getIdTicket();
        int getDiasRenta();
        void setIdTicket(int idTic);
        void setDiasRenta(int renta);
        string getNombreUsuario();

};

Ticket::Ticket(){
    Usuario c ("Alejandra",18,"alearredondo09");
    iDTicket = 0;
    diasRenta = 0;
    cliente = c;
}

Ticket::Ticket(Usuario c, int idTic, int renta){
    cliente = c;
    iDTicket = idTic;
    diasRenta = renta;
}

int Ticket::getIdTicket(){
    return iDTicket;
}

int Ticket::getDiasRenta(){
    return diasRenta;
}

void Ticket::setIdTicket(int idTic){
    iDTicket = idTic;
}

void Ticket::setDiasRenta(int renta){
    diasRenta = renta; 
}

string Ticket::getNombreUsuario(){
    return cliente.getNombre();
}

#endif