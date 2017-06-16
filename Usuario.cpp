#include "Usuario.h"

Usuario::Usuario(string username,string contrasena){
	this->username=username;
	this->contrasena=contrasena;
}
Usuario::Usuario(){

}
void Usuario::setUsername(string username){
   this-> username=username;
}
string Usuario::getUsername(){
   return username;
}
void Usuario::setContrasena(string contrasena){
   this-> contrasena=contrasena;
}
string Usuario::getContrasena(){
   return contrasena;
}
