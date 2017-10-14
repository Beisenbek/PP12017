#include <iostream>

using namespace std;

int main(){
int n; 
cin >> n;
if ( n == 1){
cout << "NO";
return 0;}
if ( n % 2 == 0 || n % 3 ==0){
if ( n == 3 || n ==2){
	cout <<"YES";
return 0;}


cout << "NO";}
else cout << "YES";
return 0;
}