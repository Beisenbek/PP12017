#include <iostream>
using namespace std;
int main(){
	int n,mx,k=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    mx=a[0];
    for(int i=1;i<n;i++){
    	if(a[i]>mx){
    		mx=a[i];
    	}
	}
	for(int i=0;i<n;i++){
    	if(a[i]==mx){
    		k++;
    	}
	}
	cout<<k<<endl;







	return 0;
    
}