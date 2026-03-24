#include <iostream> 
using namespace std;

int main() {
    int n, p; 
    cin >> n;
    
    int sol = 0;
    int reb = 0;
    
    for ( int i = 0; i < n; i++ ) {
        cin >> p;
        if ( p%2 == 0) {
            reb += p;
        }
        else {
            sol += p;
        }
    }
    if ( reb > sol ) {
        cout << "rebeldes" << endl;
    }
    else if ( sol > reb ) {
        cout << "soldados" << endl;
    }
    else {
        cout << "empate" << endl;
    }
}