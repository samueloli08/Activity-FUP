#include <iostream>
using namespace std;

int main () {
    int n;
    
    int soma = 0;
    int divi = 0;
    
     cin >> n;
    
    while ( n >= 0 ) {
        if ( n > 0 && n%2 != 0 ) {
            soma += n;
            divi++;
        }
        cin >> n;
    }
    int media = soma/divi;
    cout << media << endl;
}