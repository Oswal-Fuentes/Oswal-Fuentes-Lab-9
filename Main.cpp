#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Vehiculo.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Cliente.h"

using namespace std;

int menu();

int main(){
	bool salir=false;
	while (!salir) {
		switch (menu()) {
			case 1:{

				break;
			}//Fin Case 1
			case 2:{

				break;
			}//Fin Case 2
			case 3:{

				break;
			}//Fin Case 3
			case 4:{

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
		<< "1.- Agregar" << endl
		<< "2.- Eliminar" << endl
		<< "3.- Modificar" << endl
		<< "4.- Listar" << endl
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