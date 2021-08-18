#include<bits/stdc++.h>
using namespace std;

long int indexFinder(int x,int n){ // find last possible index
	long int temp = x;
	long int count = 2;
	
	while(temp + count <= n){
		temp += count;
		count++;
	}
	return temp;
}

int main(){
    long int n;
    long int last = 0;
    cin >> n;

    long long int arr[n]
, temp, sum = 0, max = -10000000;
    arr[0] = 0; // using one indexing
	
    for(long int i = 1; i <= n; i++){
	// we are using pre-computation technique, were each element stores the total till current element .
	    cin >> temp;
	    arr[i] = temp + arr[i - 1];
    }
	
    for(long int i = 1; i < n; i++){
	    last = indexFinder(i,n);
	    sum = arr[last] - arr[i - 1];
	    if(sum > max){
		    max = sum;
	    }
    }
    cout << max;
    
    return 0;
}
