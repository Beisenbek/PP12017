#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cin >>n;
int k=0;
for(int i=1;i<=n;++i){
	if(n%i==0)
		k++;
	
}
if(k==2)

cout<<"Yes";
else cout<<"NO";


return 0;
}