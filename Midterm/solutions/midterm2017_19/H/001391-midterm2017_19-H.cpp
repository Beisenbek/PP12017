#include <iostream>
#include <cmath>

using namespace  std;
int main(){
	int n;
	int a[n];

	cin >> n;

	int max = -1;
    int s=0;
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i){
		if(a[i]>max) max= a[i];
	
    if(max == a[i])		s++;
	}
cout << s;
return 0;
}

