#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {  
int n,i,k;
cin >>n;

for (i=2; i<n; i++){
	if(n%i==0){
		cout<<"YES";
		break;
	}	
	else {cout<<"NO";
	break;
}
}
return 0;
}