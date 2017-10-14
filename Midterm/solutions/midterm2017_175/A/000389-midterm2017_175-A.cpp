#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin>>a;
	int s=0;

	for(int i=2; i<=a; i++){
		if (a%i==0) 
			s++;
	}
	if (s>2) {
		cout<<"NO";
	}
	else if (s<=2){
		cout<<"YES";
	}

	return 0;

}