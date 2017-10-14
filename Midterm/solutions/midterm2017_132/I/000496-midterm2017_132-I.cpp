#include <iostream>
#include <cmath>
using namespace std;
	int main () {
		int N,sum1=0,sum2=0;
		cin>>N;
		int a[N][N];
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				cin>>a[i][j];}}
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				if (i==j) {
					sum1=sum1+a[i][j];}}}
		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				if (i+j==N+1) {
					sum2=sum2+a[i][j];}}}
	cout<<sum1<<endl<<sum2;		
return 0;}
