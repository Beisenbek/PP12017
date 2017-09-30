#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	
	int n,k;
	cin >> n;

	int a[n]; 

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	cin >> k;

	if(k > 0){
		/*
		t = E
		0 1 2 3 4
		A B C D E
		A -> B, B -> C, C-> D, D->E, E-A

		t <- [4]

		[4]<-[3]
		[3]<-[2]
		[2]<-[1]
		[1]<-[0]
		
		[0]<-t
		
		*/
		k = k % n;

		for(int j = 1; j <= k; ++j){
			int t = a[n-1];

			for(int i = n-1; i > 0; --i){
				a[i] = a[i-1];
			}

			a[0] = t;
		}

	}

	for(int i = 0; i < n; ++i){
		cout  << a[i] << " ";
	}

	return 0;
}

//N * N = N ^ 2 ~ 100s