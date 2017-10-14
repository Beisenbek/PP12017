 #include <iostream>
  #include <cmath>
 
  using namespace std;
 
  int main(){
 
 
 int n, i;

 
 cin >> n;
 for (int i = 2; i<=n; i++) {
     if (n % i==0) {
         cout << "NO"
     }
         else {
         	cout << "YES"
     }
 }
 