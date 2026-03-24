#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    int total = 0; 
    
        if ( n > 100 ) {
            int f3 = n - 100;
            int v3 = f3*5;
            total = 167 + v3;
        }
        else if ( n < 101 && n > 30 ) {
            int f2 = n - 30;
            int v2 = f2*2;
            total = 27 + v2;
        }
        else if ( n < 31 && n > 10 ) {
            int f1 = n - 10;
            int v1 = f1*1;
            total = 7 + v1;
        }
        else {
            total = total + 7;
        }
    cout << "R$ " << total << endl;
}