#include <iostream>
using namespace std;

int main () {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    if ((n1 != n2) && (n1 != n3) && ( n2 == n3)) {
    cout << "jog1" << endl;
    }
    
    else if ((n2 != n1) && (n2 != n3) && ( n1 == n3)) {
    cout << "jog2" << endl;
    }
    
    else if ((n3 != n1) && (n3 != n2) && ( n1 == n2)) {
    cout << "jog3" << endl;
    }
    
    else {
        cout << "empate" << endl;
    }
}