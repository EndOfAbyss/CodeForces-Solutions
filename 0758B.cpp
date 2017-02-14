#include <iostream>
#include <string.h>

using namespace std;

int tell(string s, char a) {
	
	int position;
	int count = 0;
	
	for(int i=0; i<s.size(); i++) {
		if(s[i] == a) {
			position = i;
			break;
		}
	}
	
	int r = position % 4;
	
	for(int i=r; i<s.size(); i+=4) {
		if(s[i] == '!') {
			count++;
		}
	}
	
	return count;
}

int main() {
	
	string s;
	
	cin >> s;
	
	int kr, kb, ky, kg;
	
	kr = tell(s, 'R');
	kb = tell(s, 'B');
	ky = tell(s, 'Y');
	kg = tell(s, 'G');
	
	cout << kr << " " << kb << " " << ky << " " << kg << " " << endl;
	
	return 0;
}
