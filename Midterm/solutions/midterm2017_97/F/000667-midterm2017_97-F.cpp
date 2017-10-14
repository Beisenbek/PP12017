#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	int n,k;

	cin >> n >> k;

    int a[n];


    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++){
        if (i == k){

        for (int j = 1; j < k; j++)
         cout << a[j] << " ";
        for (int j = k+1; j <= n; j++)
         cout << a[j] << " ";

    }
    }

	return 0;
}