#include <iostream>
#include <String.h>
#include <windows.h>

using namespace std;

int main() {
	
	int n;
	
	char entradaJugadores[1000][33];
	int entradaPuntuaciones[1000] = {0};
	
	char jugadores[1000][33];
	int puntuaciones[1000] = {0};
	
	int posJugador = 0;
	
	char jugador[33];
	int puntuacion;
	
	char inv[33];
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		
		cin >> jugador;
		
		strcpy(inv, jugador);
		strrev(inv);
		
		if(inv[0]=='.' && inv[1]=='.' && inv[2]=='.') {
			n = i+1;
			puntuacion = 0;
		}
		else {
			cin >> puntuacion;
		}
		
		strcpy(entradaJugadores[i], jugador);
		entradaPuntuaciones[i] = puntuacion;
		
		if(i==0) {
			strcpy(jugadores[posJugador], jugador);
		 	puntuaciones[posJugador] += puntuacion;
		 	posJugador++;
		}
			
		else {
			bool existe = false;
			
			for(int j=0; j<posJugador && existe == false; j++) {
				if(strcmp(jugadores[j], jugador) == 0) {
					existe = true;
					
					puntuaciones[j] += puntuacion;
				}
			}
			
			if(!existe) {
				strcpy(jugadores[posJugador], jugador);
				puntuaciones[posJugador] += puntuacion;
				posJugador++;
			}
		}
	}
	
	int max;
	for(int i=0; i<posJugador; i++) {
		if(i==0)
			max = puntuaciones[i];
		
		else {
			if(puntuaciones[i] > max)
				max = puntuaciones[i];
		}
	}
	
	int puntuacionWinner[1000] = {0};
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<posJugador; j++) {
			if(strcmp(entradaJugadores[i], jugadores[j]) == 0) {
				puntuacionWinner[j] += entradaPuntuaciones[i];
				
				if(puntuacionWinner[j] >= max && puntuaciones[j] == max) {
					cout << jugadores[j] << endl;
					exit(0);
				}
			}
		}
	}	
}
