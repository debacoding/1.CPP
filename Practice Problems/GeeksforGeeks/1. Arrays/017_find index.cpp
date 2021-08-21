// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int> v;
        
        // start index( index where the element 
        // is first found from left in the array )
        for(int i = 0; i < n; i++){
            if(a[i] == key){
                v.push_back(i);
                break;
            }else{
                continue;
            }
        }
        
        
        
        // end index( index where the element 
        // is first found from right in the array )
        for(int i = n - 1; i >= 0; i++){
            if(a[i] == key){
                v.push_back(i);
                break;
            }else{
                continue;
            }
        }
        
        // If the key does not exist in the array then 
        // return -1 for both start and end index in this case.
        if(v.size() == 0){
            v.push_back(-1);
            v.push_back(-1);
        }
        
        return v;
    }
  
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
  // } Driver Code Ends
