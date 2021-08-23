// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
         if(binary_search(arr.begin(), arr.end(), x))
        {
            auto leftMost  = lower_bound(arr.begin(), arr.end(), x);
            auto rightMost = upper_bound(arr.begin(), arr.end(), x);
            
            return {leftMost - arr.begin(), rightMost - arr.begin() - 1};
        }
        
        return {-1};
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends
