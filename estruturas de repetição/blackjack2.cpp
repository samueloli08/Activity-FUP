#include <iostream>
using namespace std;

int main () {
    int qt, carta;
    cin >> qt;
    
    int soma = 0;
    int n1 = 0;
    
    for (int i = 0; i < qt; i++) {
        cin >> carta;
        if (carta == 11 || carta == 12 || carta == 13) {
            carta = 10;
        }
        if (carta == 1) {
            n1++;
            carta = 11;
        }
        
        soma += carta;
        
        if (soma > 21) {
            soma = soma-(n1*10);
            n1 = 0;
        }
    }
    
    cout << soma << endl;
}