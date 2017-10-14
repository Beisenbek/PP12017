#include <iostream>
using namespace std;
int main(){
 int n,k,m;
 cin>>n>>k;
 int a[n];
  for(int i = 0; i < n; ++i){
     cin >> a[i];
    }for(int i = 0; i < n; ++i){
    	m=a[i];
        if (m!=k && k>=1)cout<<m<<" ";
    }  


 return 0;
}

