#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int arr[a][a];
	for(int i=0 ; i<a ; i++){
		for(int j=0 ; j<a ;j++){
			cin>>arr[i][j];
		}
	}
	int count1=0;
	int count2=0;
	for(int i=0 ; i<a ; i++){
		for(int j=0 ; j<a ;j++){
			if(i==j){
				count1+=arr[i][j];
			if(i + j == a-1)
				count2+=arr[i][j];	
			}
		}
	}
	cout<<count1<<endl<<count2;
	
	
	
	return 0;
}
