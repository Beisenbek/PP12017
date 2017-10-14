#include <iostream>

using namespace std;

int main(){
	int n;

	 cin >> n;
     int c = 0;
	 int a[n];
	 for(int i = 0;i < n;i++){
	 	cin >> a[i];
	 }
	 int maxa = a[0];

	 for(int i = 0;i < n;i++){
	 	if(maxa < a[i]){
           maxa = a[i];
	 	}
	 }
	 for(int i = 0;i < n;i++){
	 	if(maxa == a[i]){
	 		c++;
	 	}
	 }
	 cout << c;
	 return 0;
	}
 

 

