#include <iostream>
#include <stdlib.h>
#include <time.h>
#define filas 10
#define columnas 20
#define espacio " "
#define agua "~"
#define barco "B"
#define tocado "X"
#define filas 10
#define colum 20
#define jugador "J"
#define computadora "C"

using namespace std;

class casillero {

	char valor;
	int tinta;
	
	public:
	
	void limpiar () {
		valor=espacio;
		tinta=0; // color = negro
	}
	void ponerbarco () {
		valor=barco;
		tinta=3; // color = aguamarina		
	}
	void esbarco () {
		return (valor==barco) // resumen de lo siguiente : 
		
		//		V	V	V
	
		// 		V	V	V
	
		// if (valor == Barco) {
		// return true;
		// }
		//else
		//return false;
		//}
		
	}
		
	bool hayagua () {
		
	}
	bool esta tocado () {
	}
	
};

class tablero {
	celda t [filas] [colum] // defino
	
	public:
		void limpiatablero () {
			for (int i=0;i<filas;i++) {
			
				for (int j=0, j<colum,j++) {
				
				t [i] [j] . limpiar (); // llamado a funcion limpiar de celda
				}
		}
	
		void vertabjugador () {
			for (int i=0; i<filas;i++) {
				for (int j=0; j<colum; j++) {
					t [i] [j] . mostrar (jugador);
					cout<<espacio;
				}
				cout<< "      ";
				
				for (int j=0; j<colum; j++) {
					t [i] [j] . mostrar (computadora);
					cout<<espacio;
				}
				cout<<endl;
			}
		}
};

void mostrar (char cual) {

	if (cual==jugador) {
		cout << valor;
	}
	else {
		if (valor !="B")
		cout << valor;
		else {
		cout << espacio
		}
	}
}

// para saber color tipiar "cmd" en  -->> color /?
