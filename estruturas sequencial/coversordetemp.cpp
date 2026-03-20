#include <iostream> 
using namespace std;

int main() {
    float celcius;
    cout << "Qual a temperatura em C°: ";
    cin >> celcius;
    
    float fahrenheit = (1.8*celcius) + 32;
    cout << "Temperatura em F°: ";
    cout << fahrenheit;
}