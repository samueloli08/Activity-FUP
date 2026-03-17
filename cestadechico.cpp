#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cesta;
    cin >> cesta;
    
    int bana;
    cin >> bana;
    
    int goib;
    cin >> goib;
    
    int mang;
    cin >> mang;
    
    float soma = goib+bana+mang;
    float viag = soma/cesta;
    int final = ceil(viag);

    cout << final << endl; 
}