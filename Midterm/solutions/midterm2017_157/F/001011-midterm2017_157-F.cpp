#include<iostream>
 
using namespace std;
int main()
{
	int N, K;
	cin >> N >> K;
	int a[1010];
	for (int i=0; i<N; i++){
		cin >> a[i];
	}
	int i=0;
	 for  (int i=0; i<N; i++){
		cout << a[i] << " ";
		i=N-K;
		i++;
	}

 
return 0;
}