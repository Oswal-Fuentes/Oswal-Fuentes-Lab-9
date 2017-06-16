#include "Vehiculo.h"

Vehiculo::Vehiculo(string placa,string marca,string modelo,int anio,int precio){
  this->placa=placa;
  this->marca=marca;
  this->modelo=modelo;
  this->anio=anio;
  this->precio=precio;
}
Vehiculo::Vehiculo(){

}
void Vehiculo::setPlaca(string placa){
 this-> placa=placa;
}
string Vehiculo::getPlaca(){
 return placa;
}
void Vehiculo::setMarca(string marca){
 this-> marca=marca;
}
string Vehiculo::getMarca(){
 return marca;
}
void Vehiculo::setModelo(string modelo){
 this-> modelo=modelo;
}
string Vehiculo::getModelo(){
 return modelo;
}
void Vehiculo::setAnio(int anio){
 this-> anio=anio;
}
int Vehiculo::getAnio(){
 return anio;
}
void Vehiculo::setPrecio(int precio){
 this-> precio=precio;
}
int Vehiculo::getPrecio(){
 return precio;
}
