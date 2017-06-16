#include <iostream>
#include <string>

using namespace std;

#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo{
protected:
    string placa;
    string marca;
    string modelo;
    int anio;
    int precio;
    string estado;
public:
    Vehiculo(string,string,string,int,int,string);
    Vehiculo();

    string getPlaca();
    void setPlaca(string);

    string getMarca();
    void setMarca(string);

    string getModelo();
    void setModelo(string);

    int getAnio();
    void setAnio(int);

    int getPrecio();
    void setPrecio(int);

    string getEstado();
    void setEstado(string);  

    virtual void mostrar();  
};
#endif