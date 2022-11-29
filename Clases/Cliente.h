// Diego Sahid García Galván and Antonio Marban Regalado
// Started on 23/11/2022

#pragma once
#include <iostream>
#include <string>
#include "Producto.h"
using namespace std;

const int numeroCarrito = 10;

class Cliente{
    string productoAniadido;
    string identificadorC;
    string nombreC;
    string correoElectronicoC;
    string telefonoC;
    Producto carritoC[numeroCarrito];
    double totalC;
    public:
        // ======== Metodos constructores
        Cliente();
        Cliente(string, string, string, string);
        ~Cliente();
        // ======== Metodos Getters
        string getIdentificadorC();
        string getNombreC();
        string getCorreoElectronicoC();
        string getTelefonoC();
        Producto getCarritoC();
        double getTotalC();
        // ======== Metodos Setters
        void setIdentificadorC(string);
        void setNombreC(string);
        void setCorreoElectronicoC(string);
        void setTelefonoC(string);
        void setCarritoC(Producto);
        void setTotalC(double);
        // ======== Metodo de Impresion
        void imprimirCliente();
};