 #include <iostream>
  #include <cmath>
 
  using namespace std;
 
  int main(){
 
 
 int n, i;
 bool YES = true;
 
 cin >> n;
 for (int i = 2; i<=n; i++) {
     if (n % i==0) {
         YES = false;
     }
 }
 if (YES) {
 cout << "YES";
 }
     else {
     cout << "NO";
     }
     return 0;
  }