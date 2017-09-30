#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	int n;
	cin >> n;

	int a[n]; 

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	///reverse
	//reverse(a+1,a+3);
	reverse(a+6,a+7);//'[6,8)'

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}

	return 0;
}
