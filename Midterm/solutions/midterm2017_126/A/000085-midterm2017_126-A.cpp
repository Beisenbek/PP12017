 #include <iostream>
  #include <cmath>
 
  using namespace std;
 
  int main(){
 
 
 int n, i;
 bool isPrime = true;
 
 cin >> n;
 for (int i = 2; i<=n; i++) {
     if (n % i==0) {
         isPrime = false;
     }
 }
 if (isPrime) {
 cout << "this number is Prime";
 }
     else {
     cout << "This is not a Prime number";
     }
     return 0;
  }