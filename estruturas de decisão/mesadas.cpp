#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    
    float m1, m2, gasto;
    cin >> m1 >> m2 >> gasto;
    
    float rest = m2-gasto;
    
    if ( fabs (m1 - rest) < 0.0001 ) {
        cout << "Iguais" << endl;
    }
    else { 
        cout << "Diferentes" << endl;
    }
}