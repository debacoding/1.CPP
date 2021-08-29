// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int maxTripletSum(int arr[], int n)
    {
    	// Complete the function
    	sort(arr,arr + n); // after sorting last three elements are largest
    	int sum = arr[n - 1] + arr[n - 2] + arr[n - 3]; // sum of three largest elements is largest
    	return sum;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout <<ob.maxTripletSum(a, n);
	    cout<<"\n";
	}
return 0;
}  // } Driver Code Ends
