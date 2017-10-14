#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >> a;
	int k = 0;
	for(int i = 1; i <=  a; ++i){
		if(a % i == 0){
			++k;
		}
	}
	if(k == 1){
		cout << "NO" << endl;
	}
	else if(k > 2){
		cout << "NO" << endl;
	}
	else{
	cout << "YES" << endl;
}
return 0;
}