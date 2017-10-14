#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;


int main(){

  int n;
  cin>>n;
  int a[n];
  int max;
  int k=0;
  for(int i=0;i<n;++i){
  	cin>>a[i];
  	if(max<a[i])
  		max=a[i];
  	


  }
  for(int i=0;i<n;++i){
  	if(max==a[i])
  		k=k+1;
  	}
  	cout<<k;


  	
  		
  
     
     
    

  return 0;
}
