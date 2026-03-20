#include <iostream>
#include <cmath>
using namespace std; 

int main () {
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    if ( abs (n1-n2) < 0.001 && abs (n1-n3) < 0.001) {
        cout << "3" << endl;
    }
    else if ( ( abs( n1-n2) < 0.001) || ( abs( n1-n3) < 0.001) ||  ( abs( n2-n3) < 0.001)) {
        cout << "2" << endl;
    }
    else {
        cout << "0" << endl;
    }
}