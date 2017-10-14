#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N,l,r;
	cin >> N,l,r;

	int a[N];
		for (int i = 0; i < N; i++){
		cin >> a[i];
        }
	for (int i = 0; i < N; i++){
		swap(a[l],a[r]); 
		cout << a[i];
	}	
	 
	
	return 0;
}