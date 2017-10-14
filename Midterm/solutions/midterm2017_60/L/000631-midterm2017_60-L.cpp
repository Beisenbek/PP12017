#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
	int b[101], n, a[101][101], m=-100001, s=0, c, cnt = 0, z = 0;
	cin >> n>>c;
	for (int i = 1; i<=n;i++){
		for (int j = 1;j<=c;j++){
			cin >>a[i][j];
			if (a[i][j]>0){
				s++;
			}
		}
		b[i]=s;
		s = 0;	
		if (b[i]>m){
			m = b[i];
			cnt = i;
		}
	}
	for (int i = 1;i<=n-1;i++){
		if (b[i]==b[i+1]){
			z++;
		}
	}
	if (z == n-1){
		cout <<"Numbers are equal";
	}
	else 
	cout <<cnt;
	return 0;
}
