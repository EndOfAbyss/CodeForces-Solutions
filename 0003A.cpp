#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int tablero[8][8];
	
	int recorrido;
	
	char x, y;
	
	char x0, y0;
	char xf, yf;
	
	char entrada[2];
	
	cin >> entrada;
	x0 = entrada[0];
	y0 = entrada[1];
	
	cin >> entrada;
	xf = entrada[0];
	yf = entrada[1];

	
	int vx, vy;
	
	vx = xf - x0;
	vy = yf - y0;
	
	if(abs(vx) > abs(vy))
		cout << abs(vx) << endl;
	else
		cout << abs(vy) << endl;
				
	x = x0;
	y = y0;
	
	while(x!=xf || y!=yf) {
		
		if(x!=xf && y!=yf) {
			if(x<xf) {
				x++;
				if(y<yf) {
					y++;
					cout << "RU" << endl;	
				}
				else {
					y--;
					cout << "RD" << endl;
				}
			}
			else {
				x--;
				if(y<yf) {
					y++;
					cout << "LU" << endl;	
				}
				else {
					y--;
					cout << "LD" << endl;
				}
			}
		}
		
		if(x!=xf && y==yf) {
			if(x<xf) {
				x++;
				cout << "R" << endl;
			}
			else {
				x--;
				cout << "L" << endl;
			}
		}
		
		if(x==xf && y!=yf) {
			if(y<yf) {
				y++;
				cout << "U" << endl;
			}
			else {
				y--;
				cout << "D" << endl;
			}
		}
	}
}
