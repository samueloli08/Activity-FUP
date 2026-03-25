#include <iostream> 
using namespace std;

int main () {
    int n, v1, rest, pl;
    cin >> n;
    v1 = n;
    pl = 0;
    
    while (n > 0) {
        rest = n%10;
        pl = (pl*10) + rest;
        n = n/10;
    }
    if (pl == v1) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }
}