// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string winner(int x, int m, int n, long long int arr[])
    {
        // code here
        int countRam = 0,countRohan = 0;
        
        for(int i = 0; i < x; i++){
            if(arr[i] % m == 0){
                countRam++;
            }
            else if(arr[i] % n == 0){
                countRohan++;
            }
        }
        
        if(countRam > countRohan){
            return "Ram";
        }
        if(countRam < countRohan){
            return "Rohan";
        }
        if(countRam == countRohan){
            return "Both";
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, m, n;
        cin>>x>>m>>n;
        long long arr[x];
        for(int i = 0;i < x;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.winner(x, m, n, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
