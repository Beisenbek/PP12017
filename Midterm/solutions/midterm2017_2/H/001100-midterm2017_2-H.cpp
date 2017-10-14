#include <iostream>
using namespace std;
 int main(){
 	int n;
 	cin >> n;
 	int a[n];
 	int mx[n];
 	for (int i=0;i<n;i++){
 		cin >> a[i];
 		mx[i] = max(mx[i],a[i]);
 	}
 	 int k=0;
 	for (int i=0;i<n;i++){
         if (a[i]=mx[i]){ 	
         	k++;
         }
 	}
 	cout << k;
 	return 0;
 }