#include "Cliente.h"

Cliente::Cliente(string username,string contrasena,string membresia){
	this->username=username;
	this->contrasena=contrasena;
	this->membresia=membresia;
}
Cliente::Cliente(){

}
void Cliente::setMembresia(string membresia){
	this-> membresia=membresia;
}
string Cliente::getMembresia(){
	return membresia;
}
void Cliente::mostrar(){
	cout<<"Cliente"<<endl;
	Usuario::mostrar();
	cout<<"Membresia: "<<membresia<<endl;
}
