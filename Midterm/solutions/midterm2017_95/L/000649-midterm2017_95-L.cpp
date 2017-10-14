#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int b, c, d=0, e=0, f=-1, g;
    bool y=0;
    cin>>b>>c;
    int a[b][c], z[b];
    for(int i=0; i<b; ++i){
        for(int j=0; j<c; ++j){
            cin>>a[i][j];
            z[i]=0;
        }
    }
    for(int i=0; i<b; ++i){
        for(int j=0; j<c; ++j){
            if(a[i][j]>0){
            z[i]++;
        }
        }
    }
    for(int i=0; i<b-1; ++i){
        if(z[i]==z[i+1]) y=1;
    }

    for(int i=0; i<b; ++i){
        if(z[i]>f) {
            f=z[i];
            g=i;
        }

    }
    if(y==1){
        cout<<"Numbers are equal";
    }
    else cout<<g+1;
    return 0;
}