#include <iostream>

using namwspace std;

int main()
{
	int s, L, M, N;
	int a[100];
	cin>>s;
	for (int i=100; i<100; i++){
	L=i%100;
	M=(i/10)%10;
	N=i/100;
	if (L+M+N==s)
	cout<<i<<endl;
	}
	return 0;
}