#include <iostream>
using namespace std;

float fahr (float a) {
    float temp = ((a-32)*5)/9;
    return temp;
}

int main () {
    float a;
    cin >> a;
    
    float tf = fahr(a);
    cout << fixed;
    cout.precision(6);
    cout << tf << endl;
}