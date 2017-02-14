#include <iostream>

using namespace std;

int main() {
	
	string s;
	cin >> s;
	
	if(s.size() % 2 == 1) {
		cout << -1 << endl;
		exit(0);
	}
	
	int nL = 0;
	int nR = 0;
	int nU = 0;
	int nD = 0;
	
	for(int i=0; i<s.size(); i++) {
		switch (s[i]) {
			case 'L': nL++; break;
			case 'R': nR++; break;
			case 'U': nU++; break;
			case 'D': nD++; break;
		}
	}
	
	int differenceH = nR - nL;
	int differenceV = nU - nD;
	
	if(differenceH < 0) { differenceH *= -1; }
	if(differenceV < 0) { differenceV *= -1; }
	
	cout << (differenceH + differenceV) / 2 << endl;
}
