#include<iostream>
 
using namespace std;
int main()
{
	int N, K;
	cin >> N >> K;
	int a [i];
	for (int i=0; i<N; i++){
		cin>> a [i];
	}
	int i=0;
	 while (i<N){
		cout << a [i]<< " ";
		i=i-K;
	}

 
return 0;
}