#include "Vehiculo.h"

Vehiculo::Vehiculo(string placa,string marca,string modelo,int anio,int precio,string estado){
  this->placa=placa;
  this->marca=marca;
  this->modelo=modelo;
  this->anio=anio;
  this->precio=precio;
  this->estado=estado;

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
void Vehiculo::setEstado(string estado){
 this-> precio=precio;
}  
string Vehiculo::getEstado(){
  return estado;
}

void Vehiculo::mostrar(){
  cout<<"Placa: "<<placa<<endl;
  cout<<"Marca: "<<marca<<endl;
  cout<<"Modelo: "<<modelo<<endl;
  cout<<"Año: "<<anio<<endl;
  cout<<"Precio: "<<precio<<endl;
  cout<<"Estado: "<<estado<<endl;

}