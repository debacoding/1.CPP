// C++ code to demonstrate working of any_of() 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};
  
    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements"; // ternary operator used
  
    return 0;
  
}
/*
Output:
There exists a negative element
*/
