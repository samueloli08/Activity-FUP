#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a, b, c;
    cin >> a >> b >> c;
    
    float del = pow(b, 2) - (4*a*c);
    float r1 = (-b + sqrt(del))/ (2*a);
    float r2 = (-b - sqrt(del))/ (2*a);
    
    if ( del < 0 ) {
        cout << "nao ha raiz real" << endl;
    }
    else if ( del == 0 ) {
        cout << fixed;
        cout.precision(2);
        cout << r1 << endl;
    }
    else {
        cout << fixed;
        cout.precision(2);
        cout << r1 << endl << r2 << endl;
    }
}