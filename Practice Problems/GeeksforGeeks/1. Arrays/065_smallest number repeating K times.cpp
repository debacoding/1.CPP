// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
        long long int count[100000] = {0};
        
        for(int i = 0; i < N; i++){
            count[arr[i]] = count[arr[i]] + 1;
        }
        
        for(int i = 0; i < 100000; i++){
            if(count[i] == K){
                return i;
            }
        }
        return -1;
    
    }
};

// { Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}
  // } Driver Code Ends
