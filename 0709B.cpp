#include <iostream>
#include <math.h>

using namespace std;

long Minimo(long num1, long num2) {
	if(num1 < num2) { return num1; }
	else { return num2; }
}

long MinimunStroke2(long x1, long x2, long x3, long x) {
	long min, med, max;
	long result;
	
	min = x1;
	max = x1;
	if(x2 < min) { min = x2; }
	else if(x2 > max) { max = x2; }
	if(x3 < min) { min = x3; }
	else if(x3 > max) { max = x3; }
	med = x1 + x2 + x3 - min - max;
	
	if(x <= min || x >= max) {
		result = abs(x - med);
	} else if(x == med){
		result = Minimo(x - min, max - x);
	} else if( x < med) {
		result = Minimo((max - x), (med - min + Minimo((x - min), (med - x))));
	} else {
		result = Minimo((x - min), (max - med + Minimo((x - med), (max - x))));
	}
	
	return result;
}

long MinimunStroke3(long x1, long x2, long x3, long x) {
	long min, med, max;
	long result;
	
	min = x1;
	max = x1;
	if(x2 < min) { min = x2; }
	else if(x2 > max) { max = x2; }
	if(x3 < min) { min = x3; }
	else if(x3 > max) { max = x3; }
	med = x1 + x2 + x3 - min - max;
	
	result = max - min + Minimo((x - min), (max - x));
	
	return result;
}

int main() {
	long n, x;
	
	cin >> n >> x;
	
	long x1, x2, x3, min, med, max, min2, max2;
	long checkPoint;
	
	if(n == 1) {
		cout << 0 << endl;
		exit(0);
	} else if(n == 2) {
		cin >> x1 >>x2;
		cout << Minimo(abs(x1-x), abs(x2-x)) << endl;
		exit(0);
	} else if(n == 3) {
		cin >> x1 >> x2 >> x3;
		cout << MinimunStroke2(x1, x2, x3, x) << endl;
		exit(0);
	}	
	
	for(int i=1; i<=n; i++) {
		cin >> checkPoint;
		
		if(i == 1) {
			min = checkPoint;
			max = checkPoint;
			min2 = checkPoint;
			max2 = checkPoint;
		} else if(i == 2) {
			if(checkPoint < min) { min = checkPoint; }
			else { min2 = checkPoint; }
			
			if(checkPoint > max) { max = checkPoint; }
			else { max2 = checkPoint; }
		} else {
			if(checkPoint <= min) {
				min2 = min;
				min = checkPoint;
			} else if(checkPoint < min2) {
				min2 = checkPoint;
			} else if(checkPoint >= max) {
				max2 = max;
				max = checkPoint;
			} else if(checkPoint > max2) {
				max2 = checkPoint;
			}
		}
	}
	
	if(x <= min) {
		cout << max2 - x << endl;
	} else if(x >= max) {
		cout << x - min2 << endl;
	} else if(x <= min2) {
		cout << Minimo((max - x), (max2 - min + Minimo((x - min), (min2 - x)))) << endl;
	} else if(x >= max2) {
		cout << Minimo((x - min), (max - min2 + Minimo((x - min2), (max - x)))) << endl;
	} else {
		cout << Minimo(MinimunStroke3(min, min2, max2, x), MinimunStroke3(min2, max2, max, x)) << endl;
	}
}
