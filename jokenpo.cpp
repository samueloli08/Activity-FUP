#include <iostream> 
using namespace std;

int main () {
    char p1, p2;
    cin >> p1 >> p2;
    
    if ((p1=='P' && p2=='R') || (p1=='R' && p2=='S') || (p1=='S' && p2=='P')) {
        cout << "jog1" << endl;
    }
    else if (p1==p2) {
        cout << "empate" << endl;
    }
    else {
        cout << "jog2" << endl;
    }
}