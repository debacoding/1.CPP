/*
1. take an array of size n
2. Check whether the last digit of the nos. in array are divisibble by 10, if yes print "Yes" else print "No"
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N; // array size

	int A[N];
	for(int i = 0; i < N; i++){
			cin >> A[i];			
	}

	if (A[N - 1] % 10 == 0){ // last digit of N nos. divisible by 10 or not
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
