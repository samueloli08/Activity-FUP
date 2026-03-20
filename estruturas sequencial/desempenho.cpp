#include <iostream> 
using namespace std;

int main() {
    
    int min;
    cout << "Tempo Percorrido em Minutos: ";
    cin >> min;
    
    float velmed;
    cout << "Velocidade Média em Km/h: ";
    cin >> velmed;
    
    float cons;
    cout << "Consumo em Litros: ";
    cin >> cons;
    
    float tempo = min/60;
    float dist = velmed*tempo;
    float desemp = dist/cons;
    cout << "Desempenho do Seu Carro: ";
    cout << desemp;
}