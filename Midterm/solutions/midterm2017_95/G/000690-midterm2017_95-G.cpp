#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{  
    int  b, c, d, e=0, f=0, g=99999999, h;
    double l, m, n, o, p;
    bool at=0, ac=0;
    cin>>b>>c>>d;
    int a[b];
    for(int i=0; i<b; ++i){
        cin>>a[i];
    }
    for(int i=0; i<=(d-c)/2; ++i){
        swap(a[c-1+ i], a[d-1-i]);
    }
    for(int i=0; i<b; ++i){
        cout<<a[i]<<" ";
    }
    

}