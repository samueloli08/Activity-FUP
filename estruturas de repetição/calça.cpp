#include <iostream>
using namespace std;

int main () {
    int c;
    int aux = 30; 
    for (int i = 0; i < 5; i++) {
        cin >> c;
        if (c < aux) {
            aux = c;
        }
    }
    cout << aux << endl;
}