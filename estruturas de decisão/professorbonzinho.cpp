#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float p1, p2, p3, t1;
    cin >> p1 >> p2 >> p3 >> t1;
    
    if (p1<p2 && p1<p3) {
     float media = (p2+p3+t1)/3;
        if (media >= 7) {
            cout << "Aprovado com " << fixed << setprecision(1) << media << endl;
        }
        else {
            cout << "Final com " << fixed << setprecision(1) << media << endl;   
        }
    }
    else if (p2<p3) {
     float media = (p1+p3+t1)/3;
        if (media >= 7) {
            cout << "Aprovado com " << fixed << setprecision(1) << media << endl;
        }
        else {
            cout << "Final com " << fixed << setprecision(1) << media << endl;   
        }    
    }
    
    else {
        float media = (p1+p2+t1)/3;
        if (media >= 7) {
            cout << "Aprovado com " << fixed << setprecision(1) << media << endl;
        }                    
        else {
            cout << "Final com " << fixed << setprecision(1) << media << endl;   
        }
    } 
}