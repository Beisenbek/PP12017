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
	 	if(max < a[i]){
           max = a[i];
	 	}
	 }
	 for(int = 0;i < n;i++){
	 	if(max == a[i]){
	 		c++;
	 	}
	 }
	 cout << c;
	 return 0;
	}
 

 

