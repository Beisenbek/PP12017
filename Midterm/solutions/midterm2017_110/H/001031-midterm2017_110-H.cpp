#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int A[n];

	for(int i = 0; i < n; i++){
		
			cin >> A[i];
		}
	

	int maxi;

	for(int i = 0; i < n; i++){
		int sum = 0;
		
			sum += A[i];
		}
			if(i==0)
				maxi=sum;
			else{
				if(sum>maxi)
					maxi = sum;
			}
		
	
	return 0;
}