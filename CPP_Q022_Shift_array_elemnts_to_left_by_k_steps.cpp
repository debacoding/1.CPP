#include <bits/stdc++.h>
using namespace std;

void left_shift(int n,int arr[],int x){

   int i=x;

   int k=0;

   while(1){

       if(i<n){

       cout<<arr[i] <<" ";

       i++;

       }else if(k<x){

           cout<<arr[k] <<" ";

           k++;

       } else

       break;

   }

}
int main() {
    
   int n;

   cin >>n;

   int arr[n];

   for(int i=0; i<n; i++)

       cin>>arr[i];

   int x;

   cin>>x;

   left_shift(n,arr,x);

   return 0;
}
