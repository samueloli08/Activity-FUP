#include <iostream>
using namespace std;

int main() {
    int tpsg;
    cin >> tpsg;
    
    int hora = tpsg/3600;
    int tpmin = tpsg%3600;
    int min = tpmin/60;
    int resto = tpmin%60;
    
    cout << hora << ":" << min << ":" << resto << endl;
}