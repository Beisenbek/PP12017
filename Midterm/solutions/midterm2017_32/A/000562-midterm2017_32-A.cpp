#include <iostream>
#include <cmath>
using namespace std;
int main(){
 double N;
 cin>>N;
 for(int i=2;i<=sqrt(N);i=i+1){
if( N/i==int(N/i) ){
 
 cout<<"No";
 break;
}
 
}
cout<<"Yes";
}



