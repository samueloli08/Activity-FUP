#include <iostream>
using namespace std;

int main () {
    char op;
    cin >> op;
    int j1, j2;
    cin >> j1 >> j2;
    
    if ( (op == 'p') && ((j1+j2)%2 == 0) || (op == 'i') && ((j1+j2)%2 != 0)) {
        cout << "Venceu" << endl;
    }
    else {
        cout << "Perdeu" << endl;
    }
}