#include <iostream>
using namespace std;

int main () {
    int x, n;
    cin >> x >> n; 
    
    int soma = 0;
    
    for ( int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t>x) {
            soma += 1;
        }
    }
    cout << soma << endl;
}