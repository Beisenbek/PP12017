#include <iostream>
#include <cmath>

using namespace std;

int main () {
 int n;
 cin >> n;
 if (n==1 || n==2 || n==3 || n==5 || n==7){
 	cout << "YES"<< endl;
 }
    else if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
  	cout << "NO" << endl;
   	else 
  	cout << "YES" << endl;
  

	return 0; 
}