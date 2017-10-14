#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
	int a,n;

	cin>>a;

	
	if (a%2==0 || a%3==0 || a%5==0 || a%7==0 || a%9==0){
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	

return 0;
}