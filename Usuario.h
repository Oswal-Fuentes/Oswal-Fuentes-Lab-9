#include <iostream>
#include <string>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H

class Usuario{
protected:
    string username;
    string contrasena;
public:
    Usuario(string,string);
    Usuario();

    string getUsername();
    void setUsername(string);

    string getContrasena();
    void setContrasena(string);

    virtual void mostrar();

};
#endif