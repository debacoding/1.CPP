#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int T;
	cin >> T;
	
	int A[100];
	
    while(T--){
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    for(int i = N - 1; i >= 0; i-- ){
        cout << A[i] << " ";
    }
    
    cout << endl;
    
    } 
    
	return 0;
}
