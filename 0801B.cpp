#include <iostream>
#include <String>
#include <windows.h>

using namespace std;

int main() {
	
	string x, y;
	string z = "";
	
	cin >> x;
	cin >> y;
	
	for (int i = 0; i < x.size(); i++) {
		
		if (x[i] >= y[i]) {
			z += y[i];
		} else {
			cout << -1 << endl;
			exit(0);
		}
	}
	
	cout << z << endl;
}
