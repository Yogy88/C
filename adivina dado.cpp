#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main () {
		int dado;  
		int num;
		int contar;
		int limite;
	
		cout << "ADIVINA MI NUMERO"<<endl;
		
		cout << "jugaremos numeros entre 0 y ..." <<endl;
		cin >> limite;
		srand (time(NULL));
		dado = rand ()%limite;
		
		cout << "Que numero crees que elegi?" <<endl;
		cin >> num;
		
		while (num!=dado) {
			if (num<dado) {
				cout << "Mi numero es mas grande"<<endl;
				cin >> num;
			}
			if (num>dado) {
				cout << "Mi numero es mas chico"<<endl;
				cin >> num;
			}
		}
		if (num==dado) {
			cout << "ADIVINASTE! AL FIN! TAN DIFICIL? CTM!!" <<endl;
		}
		return 0;
		}
