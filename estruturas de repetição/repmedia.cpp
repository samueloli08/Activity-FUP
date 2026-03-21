#include <iostream> 
using namespace std;

int main () {
    int qt;
    cin >> qt;
    
    float num;
    float soma = 0;
    
    for ( float i = 0; i < qt; i++ ) {
        cin >> num;
        soma += num;
    }
    float media = soma/qt;
    cout << fixed;
    cout.precision(1);
    cout << media;
}