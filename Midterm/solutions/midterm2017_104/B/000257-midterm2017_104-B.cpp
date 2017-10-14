#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,k=0;
    cin>>a;
for(int i=1;i<=9;i++){
   for(int j=0;j<=9;j++){
	   for(int p=0;p<=9;p++){
		   if(i+j+p==a){
               cout<<i<<j<<p<<endl; 
            }
        }
    }
}

return 0;
}	