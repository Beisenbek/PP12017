#include <iostraem>


using namespace std;

int main(){

	int n,i;
	cin>>n>>i;

	for( i=0; i<n; i++){
		for(j=0; j<n; j++){
	    
	    	if (i==j)
	    		A [i] [j]=0;
	    	else if (i>j)
	    		A [i] [j]=4;
	    	}
	}



for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}





	return 0;
}
