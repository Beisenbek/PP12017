#include <iostream>

using namespace std;
 int main(){
  int n,b,k=0;

  cin>>n>>b;
  int a[n];
  int i;
for(int i=0;i<n;i++){
	cin>>a[i];
}
  for(int i=0;i<n;i++){
  	if(i==b-1){
  		while(i<n-1){
  			a[i]=a[i+1];
  			i++;
  		}

}
  	}
for(i=0;i<n-1;i++){
	cout<< a[i]<<" ";

}


 	return 0;
 }