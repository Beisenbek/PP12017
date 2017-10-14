#include <iostream>
 
using namespace std;
 
int main(){
 
    
 
    int N,A,B,C,D;

    cin >> N >> A >> B; 
    int a = A, b = B;
    int n[N];

    int i;
    
    for(i=0;i<N;i++){
        cin >> n[i];
    }

    int m[N];
    for(i=0;i<N;i++){
        m[i]=i+1;
    }

    for(i=b-1;i>A-2;i=i-1){
        m[a-1]=n[i];
        a=a+1;     
    }
    
   

    for(i=0;i<N;i++){
        cout << m[i] << " ";
    }

    
//  if(value)cout << "YES";
//  else cout << "NO";
 
 
    return 0;
}