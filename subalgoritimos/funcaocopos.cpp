#include <iostream>
using namespace std;

void triangulo(int n) {
    
    int soma = 0;

    while (soma < n) {

        for (int i = 0; i < n - soma ; i++) {
            cout << " ";
        }

        for (int i = 0; i < soma + 1; i++) {
            cout << n << " ";
        }

        cout << endl;
        soma++;
    }
}

int main() {
    int n;
    cin >> n;

    triangulo(n);
}