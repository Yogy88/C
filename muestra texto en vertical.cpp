#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TX 250
using namespace std;


int main () {
	
	char frase [TX];

	cout << "Indique un texto"<<endl;
	
	cin.getline(frase,TX);
	
	cout << endl;
	
	int longitud = strlen (frase);
	
	for (int i=0; i<longitud; i++) {
	
		cout << " ";
		cout << frase [i] << endl;
		cout << endl;
	}
}
