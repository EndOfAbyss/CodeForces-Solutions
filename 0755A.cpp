#include <iostream>

using namespace std;

bool isNumberPrime(int num) {
	for(int i=2; i<num; i++) {
		if(num % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main() {
	int n;
	cin >> n;
	
	for(int i=1; i<=1000; i++) {
		if(!isNumberPrime(n*i+1)) {
			cout << i << endl;
			break;
		}
	}
	
	return 0;
}
