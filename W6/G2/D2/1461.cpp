#include <iostream>

using namespace std;

int main(){

	//freopen("C:\\Users\\b.baisakov\\Documents\\PP12017\\W6\\G2\\D2\\input.txt", "r", stdin);

	int n, k = 0;

	cin >> n;

	/*int d = 1;

	if( n == 10){
		cout << 1/(1-d);
		return 0;
	}*/

	int a[10000];

	for (int q = 0; q < n; ++q){
		cin >> a[q];
	}


	int i = 0;
	int j = 1;
	bool isGameOver = true;


	while (true){
		int s = 1;
		while (a[i] == a[j]){
			j++;
			while (j < n && a[j] == -1){
				j++;
			}
			s++;
			if (j >= n) break;
		}

		if (s >= 3){
			isGameOver = false;
			for (int q = i; q < j; ++q){
				a[q] = -1;
			}
		}

		i = j;
		j = i + 1;
		while ( j < n && a[j] == -1){
			j++;
		}

		if (j >= n){
			if (isGameOver) break;
			else{
				isGameOver = true;
				i = 0;
				while (i < n && a[i] == -1){
					i++;
				}
				j = i + 1;
				while (j < n && a[j] == -1){
					j++;
				}
			}
		}

	}


	for (int i = 0; i < n; ++i){
		if (a[i] == -1){
			k++;
		}
	}

	cout << k<< endl;

	return 0;
}

