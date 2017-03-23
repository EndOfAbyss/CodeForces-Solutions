#include <iostream>
#include <String.h>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int result = 0;
	
	string poliedro;
	for(int i=0; i<n; i++) {
		cin >> poliedro;
		
		switch (poliedro[0]) {
			case 'T': result += 4; break;
			case 'C': result += 6; break;
			case 'O': result += 8; break;
			case 'D': result += 12; break;
			case 'I': result += 20; break;
		}
	}
	
	cout << result << endl;
}
