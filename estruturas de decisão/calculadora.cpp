#include <iostream>

using namespace std;

int main () {
    
    int n1;
    cin >> n1;
    
    int n2;
    cin >> n2;
    
    char op;
    cin >> op;
    
    int result;
    
    switch (op){
        case '+': 
        result = n1+n2;
        cout << result << endl;
        break;
        case '-':
        result = n1-n2;
        cout << result << endl;
        break;
        case '*':
        result = n1*n2; 
        cout << result << endl;
        break;
        case '/':
        if (n2 == 0) {
            cout << "invalida" << endl;
        }
        else {
        result = n1/n2;
        cout << result << endl;
        }
        break;
        default:
        cout << "invalida" << endl;
        break;
    }
}