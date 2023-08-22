#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct alumno {
	
	int n_matricula;
	
	float notas [3];
	
	float prom_notas;
	
};

void cargar (alumno &x);
void mostrar (const alumno &x);

int main () {
	
	alumno pepito, pablito;
	
	cargar (pepito);
	
	cargar (pablito);
	
	mostrar (pepito);
	
	mostrar (pablito);
	
	return 0
}

void cargar (alumno &x) {
	
	cout << "ingrese Matricula";
	cin >> n_matricula;
	cout << endl;
	
	for (int )
	
	prom_notas = (nota_a + nota_b + nota_c) / 3;
	
}

void mostrar (const alumno &x) {
	
	cout << "Matricula = ";
	cout << n_matricula;
	cout << endl;
	
	cout << "nota 1 = ";
	cout << nota_a;
	cout << endl;

	cout << "nota 2 = ";
	cout << nota_b;
	cout << endl;
	
	cout << "nota 3 = ";
	cout << nota_c;
	cout << endl;
	
	cout << "Promedio de notas = ";
	cout << nota_c;
	cout << endl;
	
}
