#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	int n;

	cin >> n;

    int a[n];


    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int max = 1;
    int cnt = 0;

    for (int i = 1; i <= n; i++){
        if (a[i] > max)
            max = a[i];
    }

    for (int i = 1; i <= n; i++){
        if (a[i] == max)
            cnt++;
    }
    cout << cnt << endl;


	return 0;
   }
