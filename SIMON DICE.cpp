#include <iostream>
#include <stdlib.h>
#include <time.h>
#define tx 5 		//	cantidad de caracteres a adivinar
#define colores 4 // cantidad de colores u opciones a elegir
using namespace std;

void pausaylimpia () { // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<MODIFICACION PARA EL 6 DE DICIEMBRE 

	
	for (int i=0;i<5000000;i++) //pausa para pantalla
					
	system ("cls"); //limpia pantalla (clear scream)
	
}

void juegaplayer_a (int player_a [tx]) {	//carga jugador 1 de 2
	
	for (int i=0;i<tx;i++) {
		
		cout<< "Turno del jugador 1"<<endl;
		cout << endl;
		cout<< "Al terminar pulse ENTER"<<endl;
		cin>> player_a [i];
		
			while (player_a [i]>colores) {
			
				cout<<"color no valido, por favor ingrese nuevamente"<<endl;
				cin>>player_a [i];
			}
		
		
	}

}

void juegaplayer_b (int player_b [tx]) {	//carga jugador 2 de 2
	
	for (int i=0;i<tx;i++) {
		
		cout<< "Turno del jugador 2"<<endl;
		cout << endl;
		cout<< "Al terminar pulse ENTER"<<endl;
		cin>> player_b [i];
		
		while (player_b [i]>colores) {
			
			cout<<"color no valido, por favor ingrese nuevamente"<<endl;
			cin>>player_b [i];
		}
		
		
	}
	
}

void juegamaquina (int maquina [tx]) {	//carga maquina en version 1 jugador
		
	for (int i=0;i<tx;i++) {
		
		cout<< "Turno de la maquina..."<<endl;
	
		for (int i=0;i<500000;i++) // pausa
	
		maquina [i]=rand()%colores;
		
	
	}

}

void juegaplayer (int player [tx]) {	//carga jugador1 de 1
		
	for (int i=0;i<tx;i++) {
		
		cout<< "Turno del jugador"<<endl;
		cout << endl;
		cout<< "Al terminar pulse ENTER"<<endl;
		cin>> player [i];
		
			while (player [i]>colores) {
			
				cout<<"color no valido, por favor ingrese nuevamente"<<endl;
				cin>>player [i];
			}
		
	}

}

void comparaplay (int &equivocadas, int &correctas, int maquina [tx], int player [tx]) {// comparacion para 1 jugador
	
	equivocadas=0;
	correctas=0;

	for (int i=0;i<tx;i++) {
	
		if (maquina [i]!=player [i]) {  //mal usado while
			
			equivocadas=equivocadas+1;
			
		}
		else {
		
			correctas=correctas+1;
		}
		
	}
	

}


void comparaplayers (int &equivocadas, int &correctas, int player_a [tx], int player_b [tx]) {  // comparacion para 2 jugadores
	
	equivocadas=0;
	correctas=0;
	
	for (int i=0;i<tx;i++) {
	
		if (player_a [i]!=player_b [i]) {  
			
			equivocadas=equivocadas+1;
			
		}
		else {
		
			correctas=correctas+1;
		}
		
	}


	
}



	class juegocompleto {
	
	
		int jugadagan; //total de jugadas ganadas
	
		int jugadaper; //total de jugadas perdidas
	
		int equivocadas; //errores en seguimiento de vector
	
		int correctas;	//correcto seguimiento de vector
	
		int jugadores;	//cantidad de jugadores a jugar
	
		int jugadas;	//cantidad de jugadas definidas por el jugador
	
		int maquina [tx]; //vector aleatorio de maquina
	
		int player [tx]; //vector de jugador contra maquina
	
		int player_a [tx]; // vector de jugador 1
	
		int player_b [tx]; //vector de jugador 2
	
		public: 
		void inicio () {
	
			cout<< endl;
			cout<< "  ¨°º¤ø„¸           ¸„ø¤º°¨" <<endl;
			cout<< "¤ø„¸   ¨°º¤ø„¸¸„ø¤º°¨  ¸„ø¤º°¨" <<endl;
			cout<< "¨°º¤ø„¸  SIMON DICE  .„ø¤º°¨" <<endl;
			cout<< "¸„ø¤º°¨  BY MATIAS   ¨°º¤ø„¸" <<endl;
			cout<< "¸„ø¤º°¨¸„ø¤º°¨¨°º¤ø„¸  ¨°º¤ " <<endl;
			cout<< "¸„ø¤º°¨             ¨°º¤ø„¸" <<endl;
			cout<< endl;
			cout<< endl;

			cout<< "Ingrese la cantidad de jugadores (1 o 2) o 3 para ayuda"<<endl;
			cout<< endl;
			cin>> jugadores;
		}

		void ayuda () {
	
			while (jugadores==3) {
		
				cout<< "Sigue los pasos de tu oponente, el que no los sigua pierde un punto... "<<endl;
				cout<< "El que hace 10 puntos primero gana"<<endl;
				cout<< endl;
				cout<< "Ingrese cantidad de jugadores (1 o 2)"<<endl;		
				cin>> jugadores;
		
			}
		}
	
		void error () {
	
			while (jugadores>2) {
		
				cout<< endl;
				cout<< "Solo uno o 2 jugadores, vuelva a elegir"<<endl;
				cout<< endl;
				cin>> jugadores;
		
			}
		}

		void unjugador () {
	
		
			if (jugadores==1) {
		
				cout<< endl;
				cout<< "1 jugador..." <<endl;
				cout<<endl;				
				cout<<"Defina cantidad de jugadas"<<endl;
				cin>> jugadas;

	
				for (int i=0;i<jugadas;i++) {
					
					cout<< "elija opciones entre el 0 y el ";
					cout<<colores<<endl;
					
					int jugadagan=0; 
					int jugadaper=0;
					
					juegamaquina (maquina);
										
					pausaylimpia ();
		
					juegaplayer  (player);
	
					comparaplay (equivocadas, correctas, maquina, player);
		
					if (equivocadas==0) {
			
						cout<<"Ganaste una jugada"<<endl;
						jugadagan=jugadagan++;
						cout<<endl;
						cout<<"aciertos=";
						cout<<correctas<<endl;
						cout<<"errores=";
						cout<<equivocadas<<endl;
						cout << "Jugadas ganadas =";
						cout<<jugadagan<<endl;
						cout<<endl;
						cout<<"Jugadas perdidas =";
						cout<<jugadaper<<endl;
						cout<<endl;
					}
					else {
			
						cout<<"Jugada perdida"<<endl;
						jugadaper=jugadaper++;
						cout<<endl;
						cout<<"aciertos=";
						cout<<correctas<<endl;
						cout<<"errores=";
						cout<<equivocadas<<endl;
						cout <<"Jugadas ganadas =";
						cout<<jugadagan<<endl;
						cout<<endl;
						cout<<"Jugadas perdidas =";
						cout<<jugadaper<<endl;
						cout<<endl;
					}
			
				}

	
			}
		}
	
		void dosjugadores () {
	
			if (jugadores==2) {
		
				cout<< endl;
				cout<< "2 jugadores..." <<endl;
				cout<<endl;
				cout<<"Defina cantidad de jugadas"<<endl;
				cout<< endl;
				cin>> jugadas;

	
				for (int i=0;i<jugadas;i++) {
					
					int jugadagan=0;
					int jugadaper=0;
					
					cout<< "elija opciones entre el 0 y el ";
					cout<<colores<<endl;
		
					juegaplayer_a (player_a);
					
					pausaylimpia ();
	
					juegaplayer_b  (player_b);
	
					comparaplayers  (equivocadas, correctas, player_a, player_b);
	
					if (equivocadas==0) {
			
						cout<<"Gana jugador 2"<<endl;
						jugadagan=jugadagan++;
						cout<<endl;
						cout<<"aciertos=";
						cout<<correctas<<endl;
						cout<<"errores=";
						cout<<equivocadas<<endl;
						cout << "Jugadas ganadas =";
						cout<<jugadagan<<endl;
						cout<<endl;
						cout<<"Jugadas perdidas =";
						cout<<jugadaper<<endl;
						cout<<endl;
					}
					else {
			
						cout<<"Gana jugador 1"<<endl;
						cout<<endl;
						cout<<"aciertos=";
						cout<<correctas<<endl;
						cout<<"errores=";
						cout<<equivocadas<<endl;
						cout <<"Jugadas ganadas =";
						cout<<jugadagan<<endl;
						cout<<endl;
						cout<<"Jugadas perdidas =";
						cout<<jugadaper<<endl;
						cout<<endl;
					}
		
				}
		
			}

		}
	

	};
int main () {

	juegocompleto a;
	
	a.inicio ();
	a.ayuda ();
	a.error ();
	a.unjugador ();
	a.dosjugadores ();


}



