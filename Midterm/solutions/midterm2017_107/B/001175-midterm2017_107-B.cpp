#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {  
int s,i,j,k;
cin >>s;
int a[28];
int b[28];
int c[28];
for (i=1; i<=9; i++){
	for (j=0; j<=9; j++){
		for (k=0; k<=9; k++){
			if (i+j+k==s){
				cout<<i<<j<<k<<endl;
			}
		}
	}

}
return 0;
}