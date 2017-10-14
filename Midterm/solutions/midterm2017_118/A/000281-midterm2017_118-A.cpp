#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,k=0;
	cin >> n;
	for (int i=n-1; i>1;i--)
	{
		if (n%i==0){
			k=1;
		}
	}
	if (n==1){
		cout << "NO";
	}
	else if (k==1) {
	
	cout <<"NO";
} else if (k==0){
	cout <<"YES";
}
return 0;
}
