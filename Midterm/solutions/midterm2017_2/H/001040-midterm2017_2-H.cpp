#include <iostream>
using namespace std;
 int main(){
 	int n;
 	cin >> n;
 	int a[n];
 	int mx[n];
 	for (int i=0;i<n;i++){
 		mx[i]=0;
 		cin >> a[i];
 		mx[i] = max(mx[i],a[i]);
 	}
 	 int k=0;
 	for (int i=0;i<n;i++){
         if (mx<mx[i]){
         	mx=mx[i];
         	k++;
         }
 	}
 	cout << k;
 	return 0;
 }