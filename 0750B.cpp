#include <iostream>
#include <String.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int mov;
	string dir;
	
	int status = 0;
	
	for(int i=0; i<n; i++) {
		cin >> mov >> dir;
		
		switch(dir[0]) {
			case 'N': status -= mov; break;
			case 'S': status += mov; break;
			case 'E': if(status == 0 || status == 20000) {
				cout << "NO";
				exit(0);
			} break;
			case 'W': if(status == 0 || status == 20000) {
				cout << "NO";
				exit(0);
				
			} break;
		}
		
		if(status < 0 || status > 20000) {
			cout << "NO";
			exit(0);
		}
	}
	
	if(status == 0) {
		cout << "YES";
		exit(0);
	} else {
		cout << "NO";
		exit(0);
	}
	
	return 0;
}
