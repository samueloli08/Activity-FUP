#include <iostream> 
using namespace std;

int main () {
    float c1, pd;
    cin >> c1;
    char c2;
    cin >> c2;
    cin >> pd;
    
    if ((c1<pd && c2=='m') || (c1>pd && c2=='M')) {
        cout << "primeiro" << endl;
    }
    else if ((c1>pd && c2=='m') || (c1<pd && c2=='M')){
        cout << "segundo" << endl;
    }
    else {
        cout << "primeiro" << endl;
    }
}