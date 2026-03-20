#include <iostream> 
#include <cmath>
using namespace std;

int main () {
    int cp, qb, qg, qm;
    cin >> cp >> qb >> qg >> qm;
    
    float total = qb+qm+qg;
    float tempo = total/cp;
    int final = ceil(tempo);
    
    cout << final << endl;
}
