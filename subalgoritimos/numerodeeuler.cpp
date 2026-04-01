#include <iostream> 
using namespace std;

double fatorial (int n) {
    double fat = 1;
    for (int i = 1; i <= n ; i++) {
        fat = fat*i;
    }
    return fat;
}

double euler(int n) {
    double soma = 0;
    for (int i = 0; i <= n; i++) {
        soma += 1.0/fatorial(i);
    }
    return soma;
}

int main () {
    int n;
    cin >> n;
    double eul = euler(n);
    cout << fixed;
    cout.precision(6);
    cout << eul << endl;
}