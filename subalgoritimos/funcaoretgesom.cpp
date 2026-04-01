#include <iostream> 
using namespace std;

int triangulo (int n) {
    int linha = 0;
    int somatorio = 0;
    int t = 0;
    
    while (linha < n) {
    
    for (int i = 0; i < linha + 1; i++) {
        t = t + 1;
        cout << t << " ";
        somatorio += t;
    }
    
    cout << endl;
    linha++;
    t = 0;
    
    }
    return somatorio;
}

int main () {
    int n;
    cin >> n;
    
    int s = triangulo(n);
    cout << s << endl;
}