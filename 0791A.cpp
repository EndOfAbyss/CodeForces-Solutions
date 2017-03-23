#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	int cont = 0;
	while(a <= b) {
		a *= 3;
		b *= 2;
		cont++;
	}
	
	cout << cont << endl;
}
