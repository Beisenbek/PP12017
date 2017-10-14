#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int b, c, d=0;
    cin>>b;
    int a[b];
    for(int i=0; i<b; ++i){
        cin>>a[i];
    }
    c=a[0];
    for(int i=0; i<b; ++i){
        if(a[i]>c) c=a[i];
    }
    for(int i=0; i<b; ++i){
        if(c==a[i]) d++;
    }
    cout<<d;





    return 0;
}