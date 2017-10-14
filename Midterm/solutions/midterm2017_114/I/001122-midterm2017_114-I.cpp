#include <iostream>

using namespace std;

int main() {

	int N;

	cin>>N; 

	int A[N][N];

	for(int i = 0; i < N; i++){

		for(int j = 0; j < N; j++){

			cin>>A[i][j];

		}

	}

	int a = 0;

	for(int i = 0; i < N; i++){

		for(int j = 0; j < N; j++){

			if(i == j){

				a = a + A[i][j];

			}

		}

	}

	int b = 0;

	for(int i = 0; i < N; i++){

		for(int j = 0; j < N; j++){

			if(i + j == N - 1){

				b = b + A[i][j];

			}

		}

	}

	cout<<a<<endl<<b;

	return 0;

}