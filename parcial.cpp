#include <iostream>
#include <stdlib.h>
#include <time.h>
#define tx 6
using namespace std;


struct renglonfactura {

	char articulo [15];	
	char codigo [15];
	char descripcion [50];
	int cantidadped;
	float preciouni;
	
		
	void cargar () {
						
 	cout << "articulo =" <<endl;
 	cin >> articulo;
 
 	cout << "ingrese codigo"<<endl;
 	cin >> codigo;
			
 	cout << "ingrese descripcion" <<endl;
 	cin >> descripcion;
	
 	cout << "ingrese cantidad pedida"<<endl;
 	cin >> cantidadped;
	
 	cout << "ingrese Precio Unitario"<<endl;
 	cin >> preciouni;
 	}
			
	void mostrar () {
						
 	cout << "articulo =" <<endl;
 	cout << articulo;
 		
 	cout << "codigo"<<endl;
 	cout << codigo;
	 
 	cout << "descripcion"<<endl;
 	cout << descripcion;
	 			 
 	cout << "cantidad pedida"<<endl;
 	cout << cantidadped;
	 			 
 	cout << "Precio unitario"<<endl;
 	cout << preciouni; 	
 		 			 
 	cout << "Total de Renglon="<<endl;
 	cout << preciouni*cantidadped; 
 	}
	
	void totalreglon () {
	
		preciouni*cantidadped;

	}
	
};


struct factura {
	
	renglonfactura C [tx];
	
	char numerodefactura [25];
	char fecha [10];
	int cuil;
	
	void cargar () {
					
	 cout << "ingrese numero de factura" <<endl;
 	 cin >> numerodefactura;	
 		
	 cout << "ingrese fecha" <<endl;
 	 cin >> fecha;
					
	 cout << "ingrese cuil" <<endl;
	 cin >> cuil;
		

 	for (int i=0; i<tx; i++) {
			
	 	C [i].cargar ();
			
		}
	}
			
				
	void mostrar () {
		
	 	cout << "Numero de factura ="<<endl;
 		cout << numerodefactura;
 		
 		cout << "Fecha ="<<endl;
 		cout << fecha;
								
 		cout << "cuil ="<<endl;
 		cout << cuil;
		
 	for (int i=0; i<tx; i++) {
			
 		C [i].mostrar ();
 		}
 	};
 	
	void totalfactura () {
 	
	  cout << "Total de Factura ="<<endl;
	 
	 cout << C [1].cantidadped * C [1].preciouni + C [2].cantidadped * C [2].preciouni + C [3].cantidadped * C [3].preciouni 
	 + C [4].cantidadped * C [4].preciouni + C [5].cantidadped * C [5].preciouni + C [6].cantidadped * C [6].preciouni;

	 }
};

int main () {

	
	factura a, b, c, d, e, f;

	a.cargar ();
	
	b.cargar ();
	
	c.cargar ();
	
	d.cargar ();
	
	e.cargar ();
	
	f.cargar ();
	
	a.mostrar ();
	
	b.mostrar ();	
		
	c.mostrar ();
	
	d.mostrar ();	
		
	e.mostrar ();
	
	f.mostrar ();	
	
	
}


