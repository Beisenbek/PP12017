#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//freopen("input.txt","r",stdin);

	int n;

	cin >> n;
	int a[n][n];
	int k=0;
	int z=0;

	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			cin >> a[i][j];
	
	for(int i = 0; i < n; ++i)
	 for(int j = 0; j < n; ++j)
	 { 
	 	if (i==j) 
	 	{
	 		k=k+a[i][j];
	 	}

	 } 
		
cout << k << endl;
for(int i = 0; i < n; ++i)
	 for(int j = 0; j < n; ++j)
	 { 
	 	if (i==(n-j-1)) 
	 	{
	 		z=z+a[i][j];
	 	}

	 } 



cout << z;

  return 0;
	
}
