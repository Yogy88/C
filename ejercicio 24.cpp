#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main () {
	
			float BASE, H, AREA;
			
			cout << "PROGRAMA DE CALCULO DE AREA DE TRIANGULO" <<endl;
			cout << endl;
			
			cout << "(base x altura) / 2" <<endl;
			cout << endl;
			
			cout << "INGRESE LA BASE" << endl;
			cin >> BASE;
			
			cout << "INGRESE LA ALTURA" << endl;
			cin >> H;
			cout << endl;
			
			int CALCULO_AREA (float BASE, float H, float AREA);
		
			cout << "AREA=" << AREA;
			
	return 0;
}
int CALCULO_AREA (float BASE, float H, float AREA) {
	
		AREA = (( BASE * H ) / 2);
		
		return AREA;
}
