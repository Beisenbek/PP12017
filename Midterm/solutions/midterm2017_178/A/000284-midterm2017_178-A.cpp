#include <iostream>
#include <cmath>

using namespace std;

int main(){

int a;
cin >> a;

for(int i=2; i < a; i++)
	if(a%i==0){
		cout << "NO";
		return 0;
	}

		else if(a%a==0 && a%1==0){
			cout << "YES";
			return 0;
		} 

	return 0;
}