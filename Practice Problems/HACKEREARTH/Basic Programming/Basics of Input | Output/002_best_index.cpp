#include<bits/stdc++.h>
using namespace std;

int indexFinder(int x,int n){
	int count=1;
    while(x<=n){  
      count++;
      x=x+count;
    }
    x=x-count;
    return x;
}

int main(){

   int n;
   cin>>n; // array size

   int arr[n+1]={0};
   int arrIndex[n+1]={0};
   int sum[n+1]={0};
   int finalArr[n+1]={0};

   for(int i=1;i<=n;i++){
      cin>>arr[i]; // array elements
      arrIndex[i]=indexFinder(i,n); // array indices
      sum[i]=arr[i]+sum[i-1] ; // array sum
    }

    int max=INT_MIN;

    for(int i=1;i<=n;i++){
       finalArr[i]=sum[arrIndex[i]]-sum[i-1] ;
       if(finalArr[i]>max){
          max=finalArr[i];
        }
    }
    cout<<max<<endl;

    return 0;
}
