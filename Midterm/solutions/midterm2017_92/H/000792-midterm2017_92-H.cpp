#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >> a;
	int n[a];
	int k = 1;
	int maxi = -1;
	for(int i = 1; i <= a; ++i){
		cin >> n[i];
		if(n[i] == maxi){
			++k;
		}
		if(n[i] > maxi){
			k = 1;
		}
	}
	cout << k;
	
	
return 0;
}