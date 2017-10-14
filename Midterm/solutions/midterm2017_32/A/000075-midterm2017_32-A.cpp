#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int N;
 cin>>N;
 if (N==1) cout<<"No";
 for(int i=1;i<N;i=i+1){
if(N%i==1){
	cout<<"Yes";
	break;}
 
 cout<<"No";
}
 
}
