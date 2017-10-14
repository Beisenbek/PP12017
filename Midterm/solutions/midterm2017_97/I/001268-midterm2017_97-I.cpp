#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	int n;

	cin >> n;

    int a[n][n];
    
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n; j++)
        cin >> a[i][j];
    }
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n; j++)
            if (i = j){
                sum1 = sum1 + a[i][j];
            }
        }

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n; j++)
            if (i = n - j){
                sum2 = sum2 + a[i][j];
                }
        }  
        cout << sum1 << endl;
        cout << sum2 << endl;  

	return 0;
   }