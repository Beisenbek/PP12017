#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >> a;
	int n[a];
	int k = 1;
	int m;
	int maxi = -1;
	for(int i = 1; i <= a; ++i){
		cin >> n[i];
		if(n[i] == maxi){
			++k;
		}
		else if(n[i] > maxi){
			k = 1;
		}
	else{
			m = 0;
	}
	}
	cout << k << endl;
	
	
return 0;
}