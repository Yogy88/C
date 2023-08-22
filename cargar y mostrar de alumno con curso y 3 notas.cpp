#include <iostream>
#include <stdlib.h>
#define tx 2
using namespace std;

struct alumno {
	
	int matricula;
	
	float N1, N2, N3;
	
	
	
	void cargar () {
	
	 	cout << "Ingrese Nota 1"<<endl;
	 	cin  >> N1;
	 
	 	cout << "Ingrese Nota 2"<<endl;
	 	cin  >> N2;
	 
	 	cout << "Ingrese Nota 3"<<endl;
	 	cin  >> N3;
	}

	void mostrar () {
		
		cout << "Nota 1"<<endl;
	 	cout << N1;
	 
	 	cout << "Nota 2"<<endl;
	 	cout << N2;
	 
	 	cout << "Nota 3"<<endl;
	 	cout << N3;
	}
	
	float promedio () {
		
		return (N1 + N2 + N3)/3;
		
	}
};

struct curso {
	
	alumno C [tx];
	
	char turno [10];
	
	void cargar () {
		
		cout << "Ingrese el turno"<<endl;
		
		cin >> turno;
		
		for (int i=0; i<tx; i++) {
			
			cout << "alumno =";
			cout << i<<endl;
			
			C [i].cargar ();
		}
	}

	void mostrar () {
		
		cout << "Turno"<<endl;
		
		cout << turno;
		
		for (int i=0; i<tx; i++) {
			
			C [i].mostrar ();
		}
	}

};


int main () {
	
		curso tarde, noche;
	
		tarde.cargar ();
	
		noche.cargar ();
	
		tarde.mostrar ();
	
		noche.mostrar ();
	
		}
