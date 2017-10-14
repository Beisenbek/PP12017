#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, m;

	cin >> n;

	for(int m = 2; m <=1000; m++)
		if(m/1 && n/m && n%m==0 ){
			cout << "YES";
		}

	if(n/n==1 && n/1==n && n>1){
		cout << "YES";
	}
	else(n/m){
		cout << "NO";
	}
	return 0;
		
}