#include <iostream>
using namespace std;
int main(){
	int a[100][100], n, c=0, d=0;
	cin >> n;
	for (int i =0; i<n ; i++){
		for (int j=0; j<n ; j++){
			cin >> a[i][j];
		}
	}
	for (int i =0; i<n ; i++){
		for (int j=0; j<n ; j++){
			if (j==i){
				c+=a[i][j];
			}
		}
}
for (int i=0; i<n; i++){
	d+=a[i][n-i-1];
}
cout << c << endl;
cout << d << endl;
return 0;
}