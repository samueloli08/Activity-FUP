#include <iostream>
using namespace std;

int main () {
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    
    int soma = n1+n2+n3+n4;
    
    if (soma == 0) {
        cout << "nenhum" << endl;
    }
    else if ( soma%4 == 1 || soma == 1) {
        cout << "jog1" << endl;
    }
    else if ( soma%4 == 2 || soma == 2) {
        cout << "jog2" << endl;
    }
    else if ( soma%4 == 3 || soma == 3) {
        cout << "jog3" << endl;
    }
    else {
        cout << "jog4" << endl;
    }
}