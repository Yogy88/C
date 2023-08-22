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
	
	void cargar () {
	
	 cout << "ingrese codigo" <<endl;
	 cin >> codigo;
	
	 cout << "ingrese descripcion" <<endl;
	 cin >> descripcion;
	
	 cout << "ingrese costo"<<endl;
	 cin >> pcosto;
	
	 cout << "ingrese stock"<<endl;
	 cin >> stock;
	
	 pvta= pcosto*1.25; 
}
};

void mostrar (producto &X);

int main () {
	
	producto a, pro;
	
	a.cargar ();
	
	pro.cargar ();
	
	mostrar (a);
	
	mostrar (pro);
	
	}


void mostrar (producto &X) {
	
	 cout << "codigo =" <<endl;
	 cin >> x.codigo;
	
	 cout << "descripcion =" <<endl;
	 cin >> x.descripcion;
	
	 cout << "costo ="<<endl;
	 cin >> x.pcosto;
	
	 cout << "stock ="<<endl;
	 cin >> x.stock;
	
	 cout << "precio de venta =";
	 cout << x.pvta= x; 
}
