#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t; // test cases
    
    long int a, b, c;
    long int even_fibSum;
     while(t--){
         long int n;
         cin >> n; // no. of terms
         
         a = 1, b = 2, c = 3; // first three nos.
         even_fibSum = 2; // initial sum
         
         while (c < n){
             if(c % 2 == 0){
                 even_fibSum += c;
             }
             a = b;
             b = c;
             c = a + b;
         }
            
    cout << even_fibSum << endl;
    }     
    return 0;
    
}
