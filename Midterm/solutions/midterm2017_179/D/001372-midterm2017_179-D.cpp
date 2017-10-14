#include <iostream>
#include <cmath>
using namespace std;

int main(){
	char S;
	int a;
	cin>>S;
	a=0;
	for (int i=0; i<=S; i++){
	if ((i='a')||(i='e')||(i='i')||(i='o')||(i='u'))
	a=a+1;
	
	cout<<a;
	break;
}
	return 0;
}