#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	
	int n;
	vector <int> A;
	vector <int> B;
	int performanceA[5] = {0};
	int performanceB[5] = {0};
	
	int num;
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> num;
		A.push_back(num);
		performanceA[num-1]++;
	}
	
	for(int i=0; i<n; i++) {
		cin >> num;
		B.push_back(num);
		performanceB[num-1]++;
	}
	
	for(int i=0; i<5; i++) {
		if((performanceA[i] + performanceB[i]) % 2 != 0) {
			cout << -1 << endl;
			exit(0);
		}
	}
	
	int result = 0;
	int desviacion = 0;
	
	for(int i=0; i<5; i++) {
		result += fabs(performanceA[i] - performanceB[i]);
		desviacion += performanceA[i] - performanceB[i];
	}
	
	if(desviacion == 0) {
		cout << (result / 4);
	} else {
		cout << -1;
	}	
}
