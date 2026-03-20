#include <iostream> 
#include <cmath>
using namespace std;

int main () {
    int pd, c1, c2;
    cin >> pd >> c1 >> c2;
    
    if (abs(pd-c1)<(abs(pd-c2))) {
        cout << "primeiro" << endl;
    }
    else if ((abs(pd-c2))<(abs(pd-c1))) {
        cout << "segundo" << endl;
    }
    else {
        cout << "empate" << endl;
    }
}