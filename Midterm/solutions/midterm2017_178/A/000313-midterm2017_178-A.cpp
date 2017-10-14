#include <iostream>
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;

for(int i=2; i < n; i++)
	if(n%i==0){
		cout << "NO";
		return 0;
	}

		else if(n%n==0 && n%1==0){
			cout << "YES";
			return 0;
		} 

	return 0;
}