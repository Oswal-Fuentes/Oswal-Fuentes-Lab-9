#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
#include "Vehiculo.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Cliente.h"

using namespace std;

//Funcion menu principal
int menu();
//Funcion menu agregar tipo de usuario
int menuAgregarUsuario();
//Funcion menu administrador
int menuAdministrador();

int main(){
	vector<Usuario*>usuarios;
	vector<Vehiculo*>vehiculos;	
	string username="admin";
	string contrasena="123";
	string cargo="admin";
	string num_seguro_social="123";
	Usuario* admin = new Administrador(username,contrasena,cargo,num_seguro_social);
	usuarios.push_back(admin);
	bool salir=false;
	while (!salir) {
		switch (menu()) {
			case 1:{
				switch (menuAgregarUsuario()) {
					case 1:{
						string username;
						string contrasena;
						string cargo;
						string num_seguro_social;
						cout<<"Ingrese username del administrador: "<<endl;
						cin>>username;
						cout<<"Ingrese contrasena del administrador: "<<endl;
						cin>>contrasena;
						cout<<"Ingrese cargo del administrador: "<<endl;
						cin>>cargo;
						cout<<"Ingrese numero de seguro social del administrador: "<<endl;
						cin>>num_seguro_social;
						Usuario* admin = new Administrador(username,contrasena,cargo,num_seguro_social);
						usuarios.push_back(admin);
						break;
					}//Fin Case 1 agregar
					case 2:{
						string username;
						string contrasena;
						string membresia;
						cout<<"Ingrese username del cliente: "<<endl;
						cin>>username;
						cout<<"Ingrese contrasena del cliente: "<<endl;
						cin>>contrasena;
						cout<<"Ingrese membresia del cliente: "<<endl;
						cin>>membresia;
						Usuario* cliente = new Cliente(username,contrasena,membresia);
						usuarios.push_back(cliente);
						break;
					}//Fin Case 2 agregar
				}
				break;
			}//Fin Case 1
			case 2:{
				cout<<"Bienvenido al login!"<<endl;
				cout<<"Username: ";
				cin>>username;
				cout<<"Contrasena: ";
				cin>>contrasena;
				int tipo=0;//0 nada,1 admin,2 cliente
				for (int i = 0; i < usuarios.size(); i++)
				{
					if((usuarios[i]->getUsername()==username)&&(usuarios[i]->getContrasena()==contrasena)){
						if(typeid(*usuarios[i])==typeid(Administrador)){
							tipo=1;
							cout<<"Entro un admin!"<<endl;
						}
						if(typeid(*usuarios[i])==typeid(Cliente)){
							tipo=2;
							cout<<"Entro un cliente!"<<endl;
						}
					}	
				}
				if(tipo==1){//ADMIN
					bool salir=false;
					while (!salir) {
						switch (menuAdministrador()) {
							case 1:{
								string placa="ACB-90";
								string marca;
								string modelo;
								int anio;
								int precio;
								string estado="No alquilado";

								cout<<"Marca: ";
								cin>>marca;
								cout<<"Modelo: ";
								cin>>modelo;
								cout<<"Año: ";
								cin>>anio;
								cout<<"Precio: ";
								cin>>precio;
								Vehiculo* vehiculo = new Vehiculo(placa,marca,modelo,anio,precio,estado);
								vehiculos.push_back(vehiculo);
								break;
							}//fin case 1
							case 2:{
								string placa="";
								string marca;
								string modelo;
								int anio;
								int precio;

								int pos;
								cout<<"Ingrese posicion del vehiculo que desea modificar: ";
								cin>>pos;

								cout<<"Ingrese nuevos atributos del vehiculo"<<endl;
								cout<<"Marca: ";
								cin>>marca;
								cout<<"Modelo: ";
								cin>>modelo;
								cout<<"Año: ";
								cin>>anio;
								cout<<"Precio: ";
								cin>>precio;
								vehiculos[pos]->setMarca(marca);
								vehiculos[pos]->setModelo(modelo);
								vehiculos[pos]->setAnio(anio);
								vehiculos[pos]->setPrecio(precio);
								break;
							}//fin case 2
							case 3:{
								int pos;
								cout<<"Ingrese la posicion del vehiculo que desea remover: ";
								cin>>pos;
								vehiculos.erase(vehiculos.begin()+pos);
								cout<<"Se ha removido el vehiculo!"<<endl;
								break;
							}//fin case 3
							case 4:{
								salir=true;
								break;
							}//fin case 3
						}//fin switch admin
					}//Fin while
				}//fin if admin
				if(tipo==2){//CLIENTE

				}//fin if cliente
				break;
			}//Fin Case 2
			case 3:{
				cout<<"\n";
				cout<<"Listando..."<<endl;
				cout<<"\n";
				for (int i = 0; i < usuarios.size(); i++)
				{
					usuarios[i]->mostrar();
					cout<<"\n";
				}
				break;
			}//Fin Case 3
			case 4:{
				cout<<"\n";
				cout<<"Listando..."<<endl;
				cout<<"\n";
				for (int i = 0; i < vehiculos.size(); i++)
				{
					vehiculos[i]->mostrar();
					cout<<"\n";
				}
				break;
			}//Fin Case 4
			case 5:{
				salir=true;
				break;
			}//Fin Case 5
			return 0;
		}//Fin swtich
	}//Fin While
	return 0;
}//FIN MAIN

int menu() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU-----" << endl
		<< "1.- Agregar usuario" << endl
		<< "2.- Login" << endl
		<< "3.- Listar usuarios" << endl
		<< "4.- Listar autos" << endl
		<< "5.- Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 5)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuAgregarUsuario() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU AGREGAR-----" << endl
		<< "1.- Administrador" << endl
		<< "2.- Cliente" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 2)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuAdministrador() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU ADMINISTRADOR-----" << endl
		<< "1.- Agregar auto" << endl
		<< "2.- Modificar auto" << endl
		<< "3.- Eliminar auto" << endl
		<< "4.- Log out" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 4)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

