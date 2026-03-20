#include <iostream>
using namespace std;

int main () {
    int n1;
    cin >> n1;
    
    if (n1 > 0){
        cout << "positivo" << endl;
    }
    else if (n1 == 0) {
        cout << "nulo" << endl;
    }
    else {
        cout << "negativo" << endl;
    }
}