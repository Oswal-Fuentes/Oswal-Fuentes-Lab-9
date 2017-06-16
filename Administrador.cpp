#include "Administrador.h"

Administrador::Administrador(string username,string contrasena,string cargo,string num_seguro_social){
	this->username=username;
	this->contrasena=contrasena;
	this->cargo=cargo;
	this->num_seguro_social=num_seguro_social;
}
Administrador::Administrador(){

}
void Administrador::setCargo(string cargo){
	this-> cargo=cargo;
}
string Administrador::getCargo(){
	return cargo;
}
void Administrador::setNum_seguro_social(string num_seguro_social){
	this-> num_seguro_social=num_seguro_social;
}
string Administrador::getNum_seguro_social(){
	return num_seguro_social;
}
void Administrador::mostrar(){
	cout<<"Administrador"<<endl;
	Usuario::mostrar();
	cout<<"Cargo: "<<cargo<<endl;
	cout<<"Numero de seguro social: "<<num_seguro_social<<endl;
}