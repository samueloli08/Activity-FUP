#include <iostream> 
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    
    int soma = 0;
    
    for (int i = a; i <= b; i++) {
        if ( i%2 == 0 && i%3 == 0) {
            soma += i;
        }
    }
    cout << soma << endl;
}