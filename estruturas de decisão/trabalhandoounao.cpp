#include <iostream>
using namespace std; 

int main() {
    int d, h, m;
    cin >> d >> h >> m;
    
    if ( d == 2 || d == 3 || d == 4 || d == 5 || d == 6 || d == 7 ) {
        if (d == 7) {
            if (h>=8 && h<12) {
                cout << "SIM" << endl;
            }
            else {
            cout << "NAO" << endl;
        }    
        }
        else if ( (h>=8 && h<12) || (h>=14 && h<18)) {
            cout << "SIM" << endl;
    }   
        else {
            cout << "NAO" << endl;
        }
    }
    else {
       cout << "NAO" << endl;
    }
    
}