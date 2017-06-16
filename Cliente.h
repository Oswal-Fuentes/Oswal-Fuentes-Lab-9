#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente:public Usuario{
protected:
	string membresia;
public:
	Cliente(string,string,string);
	Cliente();

	string getMembresia();
	void setMembresia(string);

};
#endif