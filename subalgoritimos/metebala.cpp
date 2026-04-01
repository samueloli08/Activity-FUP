#include <iostream> 
#include <cmath>
using namespace std;

float distancia (float a, float b, float c, float d) {
    float dis = sqrt(pow((c-a), 2)+(pow((d-b), 2)));
    return dis;
}

int main () {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float dis = distancia(a,b,c,d);
    cout << fixed;
    cout.precision(2);
    cout << dis << endl;
}