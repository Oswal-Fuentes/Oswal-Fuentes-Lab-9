#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador:public Usuario{
protected:
    string cargo;
    string num_seguro_social;
public:
    Administrador(string,string,string,string);
    Administrador();

    string getCargo();
    void setCargo(string);

    string getNum_seguro_social();
    void setNum_seguro_social(string);

    void mostrar();

};
#endif