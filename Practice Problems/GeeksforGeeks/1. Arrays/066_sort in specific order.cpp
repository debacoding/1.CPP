/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        int i,j;
        vector<long long> even, odd;
        
        for(i = 0; i < n; i++){ // storing even and odd elements in even and odd vectors respectively
            if(arr[i] % 2 == 0)
                even.push_back(arr[i]);
            
            else
                odd.push_back(arr[i]);
            
        }
        
       sort(even.begin(),even.end());
       sort(odd.begin(),odd.end());
       
       reverse(odd.begin(),odd.end()); // since we need desc sort for odd
       
       i = 0;
       for(i = 0; i < odd.size(); i++)
           arr[i] = odd[i];
       
       
       for(j = 0; j < even.size(); j++, i++)
           arr[i] = even[j];
       
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
