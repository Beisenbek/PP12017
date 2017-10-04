#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	int k = 0,x,k1=0,k2=0;

	for(int i = 0; i < n; ++i){
		cin >> x;
		if(x == 0){
			k++;
		}else if(x < 0){
			k1++;
		}else{
			k2++;
		}
	}

	cout << k << " " << k2 << " " << k1;

	return 0;
}
