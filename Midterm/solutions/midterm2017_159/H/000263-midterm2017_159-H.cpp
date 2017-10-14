#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], mx=0;
    int k=0;
    for(int i=0; i<n;++i){
        cin>>a[i];
        if (a[i]>mx) mx=a[i];
    }
      for(int i=0; i<n;++i){
        if (a[i]==mx) k++;
    }
    cout<<k;
	return 0;
}