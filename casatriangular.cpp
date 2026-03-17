#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    
    float lado1;
    cout << "Lado 1 do triângulo: ";
    cin >> lado1;
    
    float lado2;
    cout << "Lado 2 do triângulo: ";
    cin >> lado2;
    
    float lado3;
    cout << "Lado 3 do triângulo: ";
    cin >> lado3;
    
    float semip = (lado1+lado2+lado3)/2;
    float area = sqrt(semip*(semip-lado1)*(semip-lado2)*(semip-lado3));
    cout << "Área do Triângulo: ";
    cout << area;
    
}