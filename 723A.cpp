#include <iostream>

using namespace std;

int main() {
    
    int x1, x2, x3;
    
    cin >> x1 >> x2 >> x3;
    
    int min, med, may;
    
    min = x1;
    may = x1;
    
    if(x2 < min)
        min = x2;
    
    if(x3 < min)
        min = x3;
        
    if(x2 > may)
        may = x2;
    
    if(x3 > may)
        may = x3;
        
    med = x1 + x2 + x3 - min - may;
    
    int p = med - min + may - med;
    
    cout << p << endl;
}