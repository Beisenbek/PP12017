#include <iostream>
#include <cmath>
using namespace std;
 
 int main()
 {
 	int a;
 	cin>>a;
 	int k=0;
 	for(int i=1;i<=a;i++)
 	if (a%1==0){
 		k=k+1;
 	}
 	if(k==1) {
 		cout<<"NO";}
 		if(k>2) {cout<<"NO";}

 	else cout<<"YES";

 	return 0;
} 