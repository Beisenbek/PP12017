#include <iostream>

using namespace std;

int main (){

int n;
cin >> n;
int a[n];

for (int i = 0; i < n; i++){
	cin >> a[i];
}

int maxi = 0;
int k = 0;

for (int i = 0; i < n; i++){
	if (a[i] > maxi){
		a[i] = maxi;
		k++;
}
}
 cout << k << endl;

	return 0;
}









/*Given array with N integer numbers. Find out how many times maximum in this array is appears.*/