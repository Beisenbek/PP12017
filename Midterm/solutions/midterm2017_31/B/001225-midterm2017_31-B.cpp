#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
   
    int n;

    cin>>n;

    for(int i=100;i<=1000;i++){

    	if(n==(i/100+i%10+(i%100)/10))

    		cout<<i<<endl;
    }


    return 0;  
}