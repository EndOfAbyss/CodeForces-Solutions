#include <iostream>
using namespace std;

int buscaTriangulo(int m, int n, int p) {
	int min = m;
	int med;
	int max = m;
	
	if(n < min)	min = n;
	if(p < min) min = p;
	if(n > max) max = n;
	if(p > max) max = p;
	
	med = m + n + p - min - max;
	
	if((max-min)<med && med<(max+min) && (max-med)<min && min<(max+med) && (med-min)<max && max<(med+min))
		return 1;
	
	if((m == n+p) || (n == m+p) || (p == n+m))
		return 2;
	
	return 3;
}

int main() {
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;
	
	int resultado;
	int r;
	
	resultado = buscaTriangulo(a, b, c);
	
	r = buscaTriangulo(a, b, d);
	if(r < resultado)	resultado = r;
	
	r = buscaTriangulo(b, c, d);
	if(r < resultado)	resultado = r;
	
	r = buscaTriangulo(a, c, d);
	if(r < resultado)	resultado = r;
	
	switch(resultado) {
		case 1: cout << "TRIANGLE" << endl; break;
		case 2: cout << "SEGMENT" << endl; break;
		case 3: cout << "IMPOSSIBLE" << endl; break;
	}
}
