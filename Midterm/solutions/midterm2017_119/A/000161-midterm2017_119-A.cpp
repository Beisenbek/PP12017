#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,kek=0;
	cin>> n;
	for (int i=n-1;i>1;i--){
		if (n % i==0){
			kek=1;
		}
	}
	if (kek==1){
		cout<< "NO";
	}
	else if (kek==0){
		cout<< "YES";
	}
	return 0;
}