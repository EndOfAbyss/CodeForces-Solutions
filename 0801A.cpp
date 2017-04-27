#include <iostream>
#include <string.h>

using namespace std;

int contarVK(string s) {
    int result = 0;
    
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 'V' && s[i+1] == 'K') {
            result++;
        }
    }
    
    return result;
}

int main() {
    
    string s;
    string aux;
    
    cin >> s;
    
    int cont;
    int max = 0;
    
    for (int i = 0; i < s.size(); i++) {
        aux = s;
        aux[i] = 'V';
        
        cont = contarVK(aux);
        if(cont > max) {
            max = cont;
        }
    }
    
    for (int i = 0; i < s.size(); i++) {
        aux = s;
        aux[i] = 'K';
        
        cont = contarVK(aux);
        if(cont > max) {
            max = cont;
        }
    }
    
    cout << max << endl;
}
