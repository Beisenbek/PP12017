#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{  
    int  b, c, d, e=0, f=0, g=99999999, h;
    double k, l, m, n, o, p;
    bool at=0, ac=0;
    cin>>b;
    for(int i=0; i<=b; ++i){
        if(b%(i+1)==0) f++;
    }
    if(f>2) cout<<"NO";
    else cout<<"YES";
    

}