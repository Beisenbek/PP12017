#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	int maxi=0;
	for(int i=0 ;i<n ; i++ ){
		cin>>arr[i];
		if(maxi<arr[i])
		maxi=arr[i];
		}
	
	for(int i=0 ;i<n ; i++ ){
		if( maxi==arr[i])
		count++;
		}
		cout<<count;
	
	
	
	
	
	return 0;
}
