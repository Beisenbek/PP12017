#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int S;
 cin>>S;
 for(int i=100;i<1000;i=i+1){
if(i%10+(i%100-i%10)/10 +(i-i%100)/100==S ){
	cout<<i<<endl;
}
}
 
}

