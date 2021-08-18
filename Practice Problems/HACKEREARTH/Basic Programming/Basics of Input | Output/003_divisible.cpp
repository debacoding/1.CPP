/*
1. Take an array of size n
2. Divide the array into two equal halves
3. For first half of array take first digit of the nos.
4. For second half of array take last digit of the nos.
5. Generate a no. using those digits selected
6. Check whether the no. is divisible by 11 or not
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

   int N,i,mid,even_sum=0,odd_sum=0;
   cin >> N; // array size

   int A[N];
   for(i=0; i<N; i++){
      cin>>A[i]; // array elements
   }

   mid = (N/2)-1; // mid index 

   for(i=0; i<=mid;i++){ // from start to mid of array A
      check:if(A[i]>9){ // for first digit
         A[i] = A[i]/10;
         goto check;
      }
      else{
         A[i]=A[i]; // if the no. is of one digit 
      }
   }

   for(i=mid+1;i<N;i++){ // from mid to end of array A
      A[i]=A[i]%10;  // for last digit
   }
  

   for(i=0;i<N;i++){
      if(i%2==0) // to check if idex is even
       even_sum += A[i];
      else
       odd_sum += A[i];
   }

   int div=odd_sum - even_sum;

   if(div%11==0)
    cout<<"OUI";
   else
    cout<<"NON";

return 0;

}
