#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 int main() {
 	int n;
 	cin>>n;
 	for (int i = 2; i <n; ++i)
 	{if(n%i==0)
 			cout<<"NO";break;
 		
 	}for (int i = 2; i <n; ++i){
 		if(n%i!=0 )
 			cout<<"YES";break;
 	}
 	return 0;
 }
