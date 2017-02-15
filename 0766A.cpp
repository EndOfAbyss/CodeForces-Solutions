#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	string s1, s2;
	cin >> s1 >> s2;
	
	if(s1 != s2) {
		cout << fmax(s1.size(), s2.size()) << endl;
	} else {
		cout << -1 << endl;
	}
}
