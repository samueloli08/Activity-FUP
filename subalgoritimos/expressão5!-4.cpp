#include <iostream>
using namespace std;

int fatorial(int n) {
    int fat = 1;
    for ( int i = 1; i <= n; i++ ) {
        fat = fat*i;
    }
    return fat;
}

int main() {
    
    int resultado = fatorial(5) - fatorial(4);
    cout <<  resultado << endl; //
    
    return 0;
}