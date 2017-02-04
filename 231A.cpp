#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, b, c;

    int problemasResueltos = 0;

    cin >> n;

    for(int i=1; i<=n; i++) {
        cin >> a >> b >> c;

        if(a+b+c >= 2)
            problemasResueltos++;
    }

    cout << problemasResueltos << endl;
}