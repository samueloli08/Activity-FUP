#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    
    int soma = 0;
    
    for ( int i = a; i <= b; i++ ) {
        soma += i;
    }
    cout << soma << endl;
}