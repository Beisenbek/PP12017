# include <iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[2*n+1][2*n+1];
	for(int i=0;i<2*n+1;i++){
		for(int j=0;j<2*n+1;j++){
			if(i==n+1&&j==n+1)
				a[i][j]=
			else
			a[i][j]=a[i][j-1]+a[i-1][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
  
	return 0;
}