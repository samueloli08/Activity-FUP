#include <iostream> 
using namespace std;

int primo (int n) {
    if (n <= 1) {
         return false;
    }
    
    for (int i = 2; i < n; i++) {
        if ( n%i == 0 ) {
            return false; 
        }
    }
    return n;
}

int main () {
    int a, b;
    cin >> a >> b;
    
    for ( int i = a; i <= b; i++ ) {
        int prim = primo(i);
        if (prim != 0) {
        cout << prim << endl;
    }
    }
}