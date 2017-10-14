#include <iostream>
using namespace std;
 int main(){
 	int S,n,x,y,z;
 	cin >> n;
 	x=S/100;
    y=(S/10)%10;
    z=(S%100)%10;
 	if(x+y+z==n){
 		cout << S ;
 	} 	
 	return 0;
 }