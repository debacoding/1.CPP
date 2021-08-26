// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        // code here
        int temp[n];
        for(int i = 0; i < n; i++){
            temp[i] = arr[i];
        }
        
        sort(temp,temp + n); // smallest,largest,2nd smallest,2nd largest,...
        
        int start = 0;
        int end = n - 1;
        int count = 0;
        
        while(start <= end){
            arr[count++] = temp[start++];
            arr[count++] = temp[end--];
        }
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
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
