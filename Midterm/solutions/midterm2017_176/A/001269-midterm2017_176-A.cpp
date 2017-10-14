#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
 {
	if (n%i==0 && n%1==0){
		cout<<"YES";
	}
	else if(n%i!=0) {cout<<"NO";}
	return 0;
		}

	return 0;


}