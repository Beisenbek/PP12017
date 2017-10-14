#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	int n,a[10000],s=0;
	cin >> n;
	for(int i=0; i<1000; ++i){
		a[i]=i;
	
	if (n%i==0)
		s++;
	
	}
	if(s<=2){	
	 cout << "YES";
	}
	else
		cout << "NO";

	return 0;
}