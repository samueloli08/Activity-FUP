#include <iostream> 
#include <cmath>
using namespace std; 

float fatorial (int a) {
    int fat = 1;
    for (int i = 1; i <= a ; i++) {
        fat = fat*i;
    }
    return fat;
}

float potencia (int a, int b) {
    int pot = pow(a, b);
    return pot;
}

int main () {
    float e1 = fatorial(5) - fatorial (4);
    cout << fixed;
    cout.precision(0);
    cout << e1 << endl;
    
    float e2 = (1/fatorial(3)) + fatorial (4);
    cout << fixed;
    cout.precision(2);
    cout << e2 << endl;
    
    float e3 = fatorial (fatorial(4) - 21);
    cout << fixed;
    cout.precision(0);
    cout << e3 << endl;
    
    float e4 = potencia(8, 3) + (potencia(5, 4)/potencia(3, 5));
    cout << fixed;
    cout.precision(2);
    cout << e4 << endl;
    
    float e5 = potencia(fatorial(3), (fatorial(2)+1)) + fatorial(potencia(2, 2));
    cout << fixed;
    cout.precision(0);
    cout << e5 << endl;
}