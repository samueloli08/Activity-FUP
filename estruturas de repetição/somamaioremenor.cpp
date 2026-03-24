#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int maior = n;
    int menor = n;
    
    for ( int i = 0; i < 4; i++ ) {
        cin >> n;
        if ( n < menor ) {
            menor = n;
        }
        if ( n > maior ) {
            maior = n;
        }
    }
    
    int soma = menor + maior;
    
    cout << soma << endl;
}