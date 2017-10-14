#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a;
	cin >> a;
	int cnt;

	for (int i = 2; i < sqrt(a); ++i)
	{
		if(a%i==0) cnt++;
	}
	if(cnt==0) cout << "YES";
	if(cnt!=0) cout << "NO";

	return 0;
}