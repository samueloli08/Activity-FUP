#include <iostream> 
using namespace std;

int main () {
    int n, t, tazo;
    cin >> n;
    
    int soma = 1;
    int mrep = 0;
    int num;
    
    for (int i = 0; i < n; i++) {
        if ( i == 0) {
            cin >> t;
            tazo = t;
        }
        else {
            cin >> t;
            if (tazo == t) {
                soma++;
                if (soma > mrep) {
                    mrep = soma;
                    num = tazo;
                }
            }
            else {
                tazo = t;
                soma = 1;
                }
            }
        }
        
    cout << num << endl;
}