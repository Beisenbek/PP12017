#include <iostream>
using namespace std;
int main(){
int n,i,a,b,c;
cin>>a>>b>>c;

int y[a];
int x[a];
for(i=0;i<a;i++){
	y[i]=i+1;
	x[i]=y[i];
}
n=c-1;
for(i=b-1;i<c;i++){
	x[i]=y[n];
	n--;
	
}


for(i=2; i<5;i++);
	i=n; y[n]=i+1;

		
      cout<<x[i]<<" ";
     
	return 0;
}