	#include <iostream>
#include <cmath>
using namespace std;
 int main () {
	int a,k;
 	cin>>a;
 	for (int i=1; i<a; i++)
 	{	if (a%i==0)
 			k++;
 	}
 	if (k==2)

 		cout<<"NO";
 	else cout<<"YES";
         return 0;
     }