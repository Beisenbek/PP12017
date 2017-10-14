#include <iostream>
	
	using namespace std;
	
	int main(){
	
		
	
		int n,r,l;
		cin >> n>> r >> l;
		
		int a[n];
	
		for (int i = 0; i < n; i++)
			cin >> a[i];
	

		for(int i=0;i<n;i++){
			if(i==r) a[i]=a[l];
			if(i==l) a[i]=a[r];

		}
		

		}
		
	
	
		
	
	
		for(int i = 0; i < n; i++)
			cout << a[i] << " ";
	
	
		return 0;

