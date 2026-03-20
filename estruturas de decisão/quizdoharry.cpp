#include <iostream>
#include <string>
using namespace std;

int main () {
    
    char r1, r2, r3, r4;
    cin >> r1 >> r2 >> r3 >> r4;
    
    char g1 = 'd';
    char g2 = 'a';
    char g3 = 'c';
    char g4 = 'd';
    
    int pont = 0;
    
    if (r1 == g1) {
        pont++;
    }
    if (r2 == g2) {
        pont++;
    }
    if (r3 == g3) {
        pont++;
    } 
    if (r4 == g4) {
        pont++;
    }
    
    
    if ( pont == 0 ){
        cout << "Nunca assistiu" << endl;
    }
    else if ( pont == 1 ){
        cout << "Ja ouviu falar" << endl;
    }
    else if ( pont == 2 ){
        cout << "Interessado no assunto" << endl;
    }
    else if ( pont == 3 ){
        cout << "Fa" << endl;
    }
    else {
        cout << "Super fa" << endl;
    }
}