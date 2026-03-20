#include <iostream>
using namespace std;

int main () {
    int a, b, x;
    cin >> a >> b >> x;
    
    int soma = 0;
    
    for ( int i = a; i <= b; i++) {
        if ( i%3 == 0 && i%x == 0 ) {
            soma += i;
        }
    }
    cout << soma << endl;
}