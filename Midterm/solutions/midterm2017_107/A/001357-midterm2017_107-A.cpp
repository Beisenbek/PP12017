#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {  
int n,i,k;
cin >>n;
if (n==1){
	cout<<"NO";
}
else{
for (i=2; i<n; i++){
	if(n%i==0){
		cout<<"NO";
		break;
	}	
	else {cout<<"YES";
	break;}
}
}
return 0;
}