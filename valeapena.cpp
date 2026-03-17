#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    float em24;
    cin >> em24;
    
    float pmax4 = (em24/24)*4;
    float pmax8 = (em24/24)*8;
    float pmax12 = (em24/24)*12;
    float pmax16 = (em24/24)*16;
    cout << fixed << setprecision(6) << pmax4 << endl;
    cout << fixed << setprecision(6) << pmax8 << endl;
    cout << fixed << setprecision(6) << pmax12 << endl;
    cout << fixed << setprecision(6) << pmax16 << endl;
}