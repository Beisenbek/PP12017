#include <iostream>

using namespace std;

int main(){
 int n,m;

 cin >> n >> m;
 int a[n][m];
 int b[n];
 int c = 0;
 int k = 0;

 for(int i = 1;i <= n;i++){
 	for(int j = 1;j <= m;j++){
 		cin >> a[i][j];
 	}
 }
 for(int i = 1;i <= n;i++){
    b[i] = 0;
    c = 0;
 	for(int j = 1;j <= m;j++){
 		if(a[i][j] > 0){
 			c++;
 			b[i] = c;
 		}
 	}
 
 }
 int maxa = b[1];
 int indi = 1;
 for(int i = 1; i <= n;i++){
     if(maxa < b[i]){
     	maxa = b[i];
     	indi = i;
     }
 }
 
 for(int i = 1;i <= n;i++){
 if(maxa == b[i]){
 		k++;
 	}
 }
 if(k == n){
 	cout << "Numbers are equal";
 }
 else {
 	cout << indi;
 }

	return 0;
}

 

 

