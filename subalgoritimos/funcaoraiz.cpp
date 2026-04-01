  #include <iostream>
  #include <cmath>
  using namespace std;
  
  int raiz (int n) {
     int r = sqrt(n); 
     return r;
  }
      
  int main () {
      int n;
      cin >> n;
      int rq = raiz(n);
      cout << rq << endl;
  }