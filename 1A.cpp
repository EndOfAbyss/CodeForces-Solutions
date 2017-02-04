#include <iostream>

using namespace std;

int main() {
	
	long n, m, a;
	
	cin >> n >> m >> a;
	
	float f1, f2;
	long long i1, i2;
	
	f1 = (float)n/a;
	f2 = (float)m/a;
	
	i1 = n/a;
	i2 = m/a;
	
	if(f1-i1>0)
		i1++;
	
	if(f2-i2>0)
		i2++;
	
	cout << i1*i2 << endl;
}