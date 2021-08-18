#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
	
	int numArray[4];   // Define an array of four integers
    
	// Get inputs for the array elements
	for (int i=0; i<4; i++) {
    	cin >> numArray[i];
	}
    
	int sum = 0;
	for(int i=0; i<4; i++){
		sum += numArray[i];
	}	
	cout << sum << endl;// Print the sum
    
	return 0;
}
