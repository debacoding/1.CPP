/*
Sample Input :
9 // 1001
Sample Output :
2
*/

#include <bits/stdc++.h>
using namespace std;

int countBits(int a){
    int rem,ans=0;
    while(a>0){
        rem=a%2;
        ans=ans+rem;
        a=a/2;
    }
  return ans;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
