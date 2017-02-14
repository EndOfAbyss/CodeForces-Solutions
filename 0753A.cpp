#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	int n;
	
	cin >> n;
	
	int sizeMax = 0;
	
	string stringMax[1000];
	
	int defaultMax;
	
	
	for(int i=1; ((i*(i+1))/2)<=n; i++) {
		sizeMax = i;
	}
	
	cout << sizeMax << endl;
	
	for(int i=1; i<=sizeMax; i++) {
		if(i != sizeMax) {
			cout << i << " ";
		} else {
			cout << n - ( ( (sizeMax-1) * sizeMax ) / 2 ) << endl;
		}
	}	
}
