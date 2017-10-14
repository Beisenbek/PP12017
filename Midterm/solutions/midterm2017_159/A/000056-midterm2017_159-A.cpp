#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int k=0;
    int i;
    for (i=1;i<=n; ++i ){
    	if (n%i==0) k++;
    }
    if (k==2) cout<<"YES";
    else cout<<"NO";
    return 0;
}