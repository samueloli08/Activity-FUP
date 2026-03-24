#include <iostream>
using namespace std;

int main () {
    int n1, n2;
    cin >> n1 >> n2;
    
    int vez = 0;
    
    for ( int i = 0; i < 8; i++) {
        int ig = n2%10;
        if ( ig == n1 ) {
            vez++;
        }
        int num = n2/10;
        n2 = num;
        
    }
    cout << vez << endl;
}