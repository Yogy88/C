#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main () {
	
	float A, B, C, XA, XB;
	
	cout << "PROGRAMA PARA CALCULAR CUADRATICA" <<endl;
	cout <<endl;
	cout << "f(x)= ax2 + bx + c" <<endl;
	cout <<endl;
	
	cout << "POR FAVOR INGRESE EL VALOR DE a" <<endl;
	cout <<endl;
	cin  >> A;
	cout <<endl;
	
	cout << "INGRESE EL VALOR DE b" << endl;
	cout << "" <<endl;
	cin  >> B;
	cout <<endl;
	
	cout << "INGRESE EL VALOR DE c" << endl;
	cout <<endl;
	cin  >> C;
	cout << endl;
	
	int Cuadratica_xa  (float A,float B,float C, float XA);
	
	cout << "X1"<< "="<< XA <<endl;
	
	int Cuadratica_xb  (float A,float B,float C, float XB);
	
	cout << "X2" << "=" << XB <<endl;
	return 0;
	
}

float Cuadratica_xa (float A, float B, float C, float XA) {
	
	XA=(-B + sqrt(B*B-4*A*C))/2*A;
	
	return XA;
}

float Cuadratica_xb (float A, float B, float C, float XB) {
	
	XB=(-B - sqrt(B*B-4*A*C))/2*A;
	
	return XB;
}
