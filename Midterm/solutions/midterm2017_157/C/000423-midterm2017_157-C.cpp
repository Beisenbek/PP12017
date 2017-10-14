#include<iostream>
 
using namespace std;
int main()
{
	int N, K;
	cin >> N >> K;
	int arr[i];
	for (int i=0; i<N; i++){
		cin>> arr[i];
	}
	int i=0;
	 while (i<N){
		cout << arr[i]<< " ";
		i=i-K;
	}

 
return 0;
}