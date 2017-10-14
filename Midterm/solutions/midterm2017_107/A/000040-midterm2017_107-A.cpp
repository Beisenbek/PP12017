#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {  
int n,i,k;
cin >>n;
int a[1000];

for (i=2; i<n; i++){
	if(n%i==0){
		cout<<"YES";
		break;
	}	
	else cout<<"NO";
}
return 0;
}