#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a;
	cin >> a;
	int cnt = 0;

	if(a!=1){
		for (int i = 2; i <= sqrt(a); ++i)
		{
			if(a%i==0) cnt++;
		}
	}

	if(a==1) cout << "NO";
	if(cnt==0 && a!=1) cout << "YES";
	if(cnt>0) cout << "NO";

	return 0;
}