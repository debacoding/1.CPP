#include <bits/stdc++.h>
using namespace std;


int main() {
    long int t;
    cin >> t;
    while(t--){
     long int N, multiples_of_5, multiples_of_3, multiples_of_15, sum;
     cin >> N;
     
      multiples_of_3 = (N - 1) / 3;
      multiples_of_5 = (N - 1) / 5;
      multiples_of_15 = (N - 1) / 15;
       // (a union b) = a + b - (a intersection b)
      sum = 3 * multiples_of_3 * (multiples_of_3 + 1) / 2     
              + 5 * multiples_of_5 * (multiples_of_5 + 1) / 2
              - 15 * multiples_of_15 * (multiples_of_15 + 1) / 2; 
      cout << sum << endl;          
    }
       
    return 0;
}
