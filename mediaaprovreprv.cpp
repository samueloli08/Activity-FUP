#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n1;
    cin >> n1;
    
    float n2;
    cin >> n2;
    
    float media = (n1+n2)/2;
    
    if (media >= 7){
        cout << fixed << setprecision(1) << media << endl;
        cout << "Aprovado" << endl;
    }
    else if ( media >= 4 && media < 7) {
        cout << fixed << setprecision(1) << media << endl;
        cout << "AF" << endl; 
    }
    else {
        cout << fixed << setprecision(1) << media << endl;
        cout<< "Reprovado" << endl;
    }
    }