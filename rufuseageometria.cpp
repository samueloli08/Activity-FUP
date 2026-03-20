#include <iostream> 
using namespace std;

int main() {
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    
    if ( (l1+l2) < l3 || (l1+l3) < l2 || (l2+l3) < l1) {
        cout << "invalido" << endl;
    }
    else if ( l1 == l2 && l1 == l3 ) {
        cout << "equilatero" << endl;
    }
    else if ( l1 != l2 && l1 != l3 && l2 != l3 ) {
        cout << "escaleno" << endl;
    }
    else {
        cout << "isosceles" << endl;
    }
}