#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int N;
 cin>>N;
 for(int i=2;i<=N;i=i+1){
if(N%i==0 || N==1){

 cout<<"NO";
 break;
}
 
}
cout<<"YES";
}

