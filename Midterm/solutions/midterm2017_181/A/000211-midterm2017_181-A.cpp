#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
	int a,n;

	cin>>a;

	if (a%2!=0 || a%3!=0 || a%4!=0 || a%5!=0 || a%7!=0 || a%7!=0 || a%9!=0)

		cout << "NO" <<endl;
	else if (a%a==0 && a%1==0)
		cout << "YES" <<endl;
	else 
		cout << "NO" <<endl;

return 0;
}