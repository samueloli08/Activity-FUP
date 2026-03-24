#include <iostream>
using namespace std;

int main () {
    int x, n;
    cin >> x >> n;
    
    int soma = 0;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        if ( m == x ) {
            soma += 1;
        }
    }
    cout << soma << endl;
}