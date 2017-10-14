#include  <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >>a;
	for (int i=100; i<1000; i++)
	{
		if ((i%10)+ (i/100) + ((i/10)%10) == a){
			cout <<i <<endl;
		}
	}
	
	return 0;
}
