#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=2;i<a;++i){
if(a%i == 0 || a == 1){
cout<<"NO";
break;
	} 
} if else(a%i != 0){
	cout<<"YES";
}
return 0;
}