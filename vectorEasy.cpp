#include <iostream>
#include <stdlib.h>
#include <time.h>

#define TAMVEC	10			// Tamaño máximo del vector
#define LINF	1			// Limite inferior del rango de validacion de los valores a ingresar en cargarConValidacion()
#define LSUP	100			// Limite superior del rango indicado aqui arriba

using namespace std;

void cargar(int []);				// Carga en forma secuencial todos los elementos del vector ingresando cualquier 
									// valor por teclado
									
void cargarRandom(int []);			// Carga en forma secuencial todos los elementos del vector utilizando numeros aleatorios

void cargarConValidacion(int []);	// Carga en forma secuencial todos los elementos del vector ingresando valores 
									// comprendidos entre LINF y LSUP ingresandolos por teclado
void mostrar(int []);	// Muestra un listado de todos los elementos almacenados en el vector

float promedio(int []); // Devuelve el valor promedio de los elementos almacenados en el vector

int minimo(int []);				// Función que retorna el elemento de valor minimo almacenado en el vector
void maximo(int [], int &, int&);		// Procedimiento que obtiene el elemento de valor maximo almacenado en el vector y un entero
								// que corresponde al subindece donde se encontro dicho valor
								
void pedirValor (int &); 		// Procedimiento que ingresa un entero comprendido entre LINF y LSUP para ser almacenado en el vector

int main() {

	srand(time(NULL));
	
	int vector[TAMVEC];
	int posicionMax, maxElem;
	
	
	cargarRandom(vector);
	//cargar(vector);
	//cargarConValidacion(vector);
	
	mostrar(vector);
	
	cout << "El promedio de sus elementos: " << promedio(vector) << endl;
	
	maximo(vector, maxElem, posicionMax);
	
	cout << "El menor valor almacenado es " << minimo(vector) << " y el maximo es " << maxElem << " guardado en la ubicacion "
		  << posicionMax << ".\n";
	
	return 0;
}

void cargar(int v[]) {
	
	cout << "Ingrese los elementos:\n\n";
	
	for (int pos=0; pos < TAMVEC; pos++) {
		
		cout << "Posicion " << pos << "-->   ";
		cin >> v[pos];	
	}
}

void cargarRandom(int v[]) {
	
	cout << "Los elementos se cargaran en forma automatica con valores aleatorios...\n";
	
	for (int pos=0; pos < TAMVEC; pos++) {
		
		v[pos] = rand() % LSUP;   // Se generaran valores comprendidos entre 0 y LSUP-1	
	}
	
	cout << "Operacion finalizada!!\n";
}

void mostrar(int v[]) {
	
	cout << "Listado de los elementos:\n\n";
	
	for (int pos=0; pos < TAMVEC; pos++) {
		
		cout << "Posicion " << pos << "-->   " << v[pos] << endl;	
	}
}

void pedirValor (int &num) {
	
	cin >> num;
	
	while (num < LINF || num > LSUP) {
		
		cout << "Error!!! Vuelva a ingresar un numero comprendido en el rango: " << LINF << " - " << LSUP << ": ";
		cin >> num;
	}
}

void cargarConValidacion(int v[]) {
	
	cout << "Ingrese los elementos comprendidos en el rango: " << LINF << " - " << LSUP << "\n";
	
	for (int pos=0; pos < TAMVEC; pos++) {
		
		cout << "Posicion " << pos << ": ";
		
		pedirValor(v[pos]);	
	}
}


float promedio(int v[]) {
	
	float sumaElem = 0;
	
	for (int pos=0; pos < TAMVEC; pos++) {
		
		sumaElem = sumaElem + v[pos];
	}
	
	return sumaElem / TAMVEC;
}

int minimo(int v[]) {
	
	int minValor = v[0];
	
	for (int pos=1; pos < TAMVEC; pos++) {
		
		if (v[pos] < minValor) {
			
			minValor = v[pos];
		}
	}
	
	return minValor;
}

void maximo(int v[], int &maxValor, int &posMax) {
	
	posMax   = 0;
	maxValor = v[posMax];
	
	for (int pos=1; pos < TAMVEC; pos++) {
		
		if (v[pos] > maxValor) {
			
			maxValor = v[pos];
			posMax	 = pos;
		}
	}

}
