#include <iostream>
using namespace std;

int main () {
    int cm1, cm2, cm3;
    cin >> cm1 >> cm2 >> cm3;
    
    char maior;
    char menor; 
    
    if ( cm1 > cm2 && cm1 > cm3 ) {
        maior = cm1;
    }
    else if ( cm2 > cm3 ) {
        maior = cm2;
    }
    else {
        maior = cm3;
    }
    
    if ( cm1 < cm2 && cm1 < cm3) {
        menor = cm1;
    }
    else if ( cm2 < cm3 ) {
        menor = cm2;
    }
    else {
        menor = cm3;
    }
    
    if (cm1 == maior) {
        cout << "G ";
    }
    else if (cm1 == menor) {
        cout << "P ";
    }
    else {
        cout << "M ";
    }
    
    if (cm2 == maior) {
        cout << "G ";
    }
    else if (cm2 == menor) {
        cout << "P ";
    }
    else {
        cout << "M ";
    }
    
    if (cm3 == maior) {
        cout << "G";
    }
    else if (cm3 == menor) {
        cout << "P";
    }
    else {
        cout << "M";
    }
}