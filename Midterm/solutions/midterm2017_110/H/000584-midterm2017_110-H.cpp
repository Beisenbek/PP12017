#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n;
	int s=0
	cin >> n ;
	int a[n];
	int maxi = a[0];
	 for(int i=1; i < n; i++){
	 	cin >>a[n];
	 	if(a[i]>a[0])
	 		maxi = a[i];
	 	 s=maxi++;
		 	}
	 	cout <<s;

return 0;
} 
