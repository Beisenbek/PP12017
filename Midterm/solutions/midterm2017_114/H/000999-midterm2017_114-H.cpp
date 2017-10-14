#include <iostream>

using namespace std;

int main(){
	
	int N;

	cin>>N;

	int A[N];

	for(int i = 0; i < N; i++)
		cin>>A[i];

	int maxi = A[0];

	for(int i = 0; i < N; i++){

		if(A[i] >= maxi){

			maxi = A[i];
		
		}
		
	}

	int sum = 0;

	for(int i = 0; i < N; i++){

		if(A[i] == maxi) sum++;
	
	}

	cout<<sum;

	return 0;
	
}