#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
 
   
    int n;
    cin>>n;
    if(n/n==1 && n*1==n && n%2!=0 && n%3!=0 && n%5!=0)
    	cout<<"YES";
    else cout<<"NO";
   
    return 0;
}