#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin >> t; // test cases
	
	while(t--){
	    unsigned int n,d;
	    cin >> n >> d; // n : size of array, d : rotate by d elements
	    
	    int a[n];
	    for(unsigned int i = 0; i < n; i++){
	        cin >> a[(i + n - d) % n];
	    }
	    
	    for(unsigned int i = 0; i < n; i++){
	        cout << a[i] << " ";
	    }
	    
	    cout << endl;
	}
	
	return 0;
}
