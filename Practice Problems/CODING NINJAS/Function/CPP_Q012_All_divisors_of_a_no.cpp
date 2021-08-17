#include <bits/stdc++.h>
using namespace std;

   
void printDivisors(int number){

   int i;

   if(number>= 1){
      for(i=1; i<=number/2; i++){
          if(number % i == 0)
             cout << i << " ";
       }
       cout << number << " "; ///This space is because the solution is set such that after the last number there should be a space
   }
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
