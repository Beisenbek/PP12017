#include <iostream>
#include <cmath>
using namespace std;
	int main () {
		int N,M,b=0,max=-100001,sum=0;
		cin>>N>>M;
		int a[N][M];
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=M; j++) {
				cin>>a[i][j];}}
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				sum=sum+a[i][j];}
				if (sum>max) {
					b++;
					max=sum;
					sum=0;}
					}
cout<<b;		
return 0;}

