#include <iostream>
#include <vector>

using namespace std;

int main() {
	string s[4];
	vector <int> v;
	
	for(int i=0; i<4; i++) {
		cin >> s[i];
		s[i].erase(s[i].begin(), s[i].begin()+2);
		v.push_back(s[i].size());
	}
	
	bool b1 = true;
	bool b2 = true;
	
	int countBoolean = 0;
	
	int position1 = -1;
	int position2 = -1;
	
	for(int i=0; i<v.size(); i++) {
		
		b1 = true;
		b2 = true;
		
		for(int j=0; j<v.size(); j++) {
			if(i != j) {
				if(v[i] > v[j]/2) b1 = false;
				if(v[i] < v[j]*2) b2 = false;
			}
		}
		
		if(b1)  {
			countBoolean++;
			position1 = i;
		}
		
		if(b2)  {
			countBoolean++;
			position2 = i;
		}
	}
	
	if(countBoolean == 1) {
		if(position1 != -1) {
			cout << (char)(position1+65) << endl;
		} else {
			cout << (char)(position2+65) << endl;
		}
	} else {
		cout << "C" << endl;	
	}
}
