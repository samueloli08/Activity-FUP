#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std; 

int main() {
    int num1;
    cin >> num1;
    
    int num2;
    cin >> num2;
   
    float soma = num1+num2;
    float subt = num1-num2;
    float mult = num1*num2;
    float numd1 = num1, numd2 = num2;
    float divis = numd1/numd2;
    int resto = num1 % num2;
    
    
    cout << soma << endl;
    cout << subt << endl;
    cout << mult << endl;
    cout << fixed << setprecision(2) << divis << endl; 
    cout << resto << endl;

}