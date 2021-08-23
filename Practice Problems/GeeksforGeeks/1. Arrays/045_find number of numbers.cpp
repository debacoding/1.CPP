// { Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int n, int k)
{
     //add code here.
     int count = 0;
     
     for(int i = 0; i < n; i++){
         
         while(a[i] > 0){ // while the number > 0
            
             
             if((a[i] % 10) == k) // if last digit i.e a[i] % 10 for each number in array is k then count increments
                count++;
                
             a[i] = a[i] / 10;  // we go to remaining digits of each element in array    
         }
     }
     return count;
}
