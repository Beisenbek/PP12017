#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,k;

	cin >> n >> k;
	int a[n];

for(int i = 0; i < n; ++i)
		cin >> a[i];
int i=0;
while (i!=k-1)
{
 cout << a[i] << " ";
 i=i+1;
}
i=i+1;

while (i!=n) 
{
	cout << a[i] << " ";
	i=i+1;
}



/*for(int i = 0; i < k-1; ++i)
		cout << a[i] << " "; 

for(int i = k; i < n; ++i)
		cout << a[i] << " ";	
*/
  return 0;
}
