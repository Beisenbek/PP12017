#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >> a;
	if(a==1) cout << "NO";
	if(a%a==0 && a%1==0) cout << "YES";
	else cout << "NO";




	return 0;

}