#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,max=0,kek=0;
	cin>> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>> a[i];
	}
	for (int i=0;i<n;i++){
		if (a[i]>max){
			max=a[i];
		}
	}
	for (int i=0;i<n;i++){
		if (a[i]==max){
			kek++;
		}
	}
	cout<< kek;
	return 0;
}