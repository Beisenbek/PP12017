#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N,s=0;
	cin>>N;
	int a[N];
	for(int i=0;i<N;i++){
		cin>>a[N];
	}
	int b=a[0];
	for(int i=0;i<N;i++){
		if(a[i]>b){
			b=a[i];
			s++;
		}
	}
	cout<<s;
}