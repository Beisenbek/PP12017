#include <iostream>
using namespace std;
 int main(){
 	int n;
 	cin >> n;
 	int a[n];
 	int mx=-1;
 	for (int i=0;i<n;i++){
 		
 		cin >> a[i];
 	}
 	 int k=0;
 	for (int i=0;i<n;i++){
         if (mx<a[i]){
         	mx=a[i];
         	k++;
         }
 	}
 	cout << k;
 	return 0;
 }