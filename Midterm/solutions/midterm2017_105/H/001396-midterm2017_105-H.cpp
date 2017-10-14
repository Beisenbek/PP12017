#include <iostream>
 
using namespace std;
 
int main(){
 
  //  freopen("input.txt", "r", stdin);
 
    int n,m=1;
    cin >> n;

    int a[n];
    int i;
 
    for(i=0; i<n;++i){
 
        cin >> a[i];
    }
 
    int k = a[0];
    for(i=1;i<n;i++){
        if(k==a[i])m++;
        if(k<a[i]){
            k=a[i];
            m=1;
        }
    }

    cout << m;

 
    return 0;
}