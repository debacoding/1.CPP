// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       //code here.
       int sumLeft = 0, sumRight = 0;
       
        for(int i = 0; i < n/2; i++){
               sumLeft += a[i];
        }
        for(int i = n/2; i < n; i++){
               sumRight += a[i];
        }
       
    return abs(sumLeft - sumRight); // min. no added to each element to make array balanced
       
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
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
