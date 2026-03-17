#include <iostream>
using namespace std;

int main () {
    int n1;
    cin >> n1;
    
    int n2;
    cin >> n2;
    
    int div1 = n1%3;
    int div2 = n2%3;
    
    int div3 = n1%5;
    int div4 = n2%5;
    
    if (( div1 == 0 && div2 == 0) || (div3 == 0 && div4 == 0 )) {
        cout << "sim" << endl;
    }
    else {
        cout << "nao" << endl;
    }
}