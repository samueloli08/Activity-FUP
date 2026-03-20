#include <iostream>
using namespace std;

int main () {
    float sal;
    cin >> sal;
    
    if (sal <= 1000) {
        float aum1 = sal*1.20;
        cout << fixed ;
        cout.precision(2);
        cout << aum1 << endl;
    }
    else if (sal <= 1500) {
        float aum2 = sal*1.15;
        cout << fixed ;
        cout.precision(2);
        cout << aum2 << endl;
    }
    else if (sal <= 2000) {
        float aum3 = sal*1.10;
        cout << fixed;
        cout.precision(2); 
        cout << aum3 << endl;
    }
    else {
        float aum4 = sal*1.05;
        cout << fixed;
        cout.precision(2);
        cout << aum4 << endl;
    }
}