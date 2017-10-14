#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a;

	cin >> a;
	
	int k=0;

	for(int x = 1; x <=a; x++){
		if (a%x==0){
			k++;
		}
		if(k==2)
			cout << "YES";
		else cout << "NO";

	
	return 0;
		
}