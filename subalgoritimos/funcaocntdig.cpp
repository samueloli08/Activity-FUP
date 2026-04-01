#include <iostream>
using namespace std;

int quantidade (int n) {
    int soma = 0;
    
    while (n>0) {
        n = n/10;
        soma++;
    }
    return soma;
}

int main() {
    int n;
    cin >> n;
    
    int num = quantidade(n);
    
    cout << num << endl;
}