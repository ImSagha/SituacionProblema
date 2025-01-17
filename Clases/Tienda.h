// Diego Sahid García Galván and Antonio Marban Regalado
// Started on 21/11/2022

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Cliente.cpp"
#include "Producto.cpp"
using namespace std;

const int PT = 1;
const int CT = 1;

class Tienda{
    string identificadorT;
    string nombreT;
    string direccionT;
    int cantidadProductosT;
    int cantidadClientesT;
    Producto productosT[PT];
    Cliente clientesT[CT];
    double ingresoDiarioT;
    public:
    // Metodos constructores y destructores
        Tienda();
        Tienda(string, string, string);
        ~Tienda();
    // Metodos getters
        string getIdentificadorT();
        string getNombreT();
        string getDireccionT();
        int getCantidadProductosT();
        int getCandidadClientesT();
        Producto getProductosT();
        Cliente getClientesT();
        double getIngresoDiarioT();
    // Metodos setters
        void setIdentificadorT(string);
        void setNombreT(string);
        void setDireccionT(string);
        void setCantidadProductosT(int);
        void setCantidadClientesT(int);
        void setProductosT(Producto);
        void setClientesT(Cliente);
        void setIngresoDiarioT(double);
    // Metodo Imprimir
        void imprimirTienda();
    // Metodos para agregar
        void agregarLosProductos(string);
        void agregarElProducto();
        void agregarCliente();
        void llenarCarrito();
        void imprimirTicketCompra();
        void cerrarOperaciones();
};