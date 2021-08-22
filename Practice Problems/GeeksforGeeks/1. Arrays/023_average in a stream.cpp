// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    float sum = 0;
	    vector<float> avg;
	    
	    for(int i = 0; i < n; i++){
	        sum += arr[i]; // calculates sum
	        float avg1 = sum / (i + 1); // calculates average
	        avg.push_back(avg1); // average pushed into vector "avg"
	    }
	    
	    return avg;
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.streamAvg(arr, n);
        cout << fixed<< setprecision(2);
        for (auto x : ans) {
            cout <<x<<" ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
