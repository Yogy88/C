#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct producto {                    // REGISTRO
	
	int codigo;
	
	char descripcion [50];
	
	float pvta;
	
	float pcosto;
	
	int stock;
};

void cargar ( producto &x);
void mostrar ( const producto &x);

int main () {
	
	producto a, pro;
	
	cargar (a);
	
	cargar (pro);
	
	mostrar (a);
	
	mostrar (pro);
	
	return 0;
	
}

void cargar ( producto &x) {
	
	 cout << "ingrese codigo ";
	 cin >> x.codigo;
	 cout <<endl;
	 
	 cout << "ingrese descripcion ";
	 cin >> x.descripcion;
	 cout <<endl;
	
	 cout << "ingrese costo ";
	 cin >> x.pcosto;
	 cout <<endl;
	
	 cout << "ingrese stock ";
	 cin >> x.stock;
	 cout <<endl;
	
	x.pvta= x.pcosto*1.25; 
}

void mostrar ( const producto &x) {
	
	 cout << "codigo =";
	 cout << x.codigo;
	 cout <<endl;
	
	 cout << "descripcion =";
	 cout << x.descripcion;
	 cout <<endl;
	 
	 cout << "costo =";
	 cout << x.pcosto;
	 cout <<endl;
	 
	 cout << "stock =";
	 cout << x.stock;
	 cout <<endl;
	
	 cout << "precio de venta =";
	 cout << x.pvta;
	 cout <<endl; 
}
