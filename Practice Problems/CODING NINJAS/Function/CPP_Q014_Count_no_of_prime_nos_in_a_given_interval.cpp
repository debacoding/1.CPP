/*
Sample Input  :
2 10        // 2,3,5,7
Sample Output  :
4
*/

#include <bits/stdc++.h>
using namespace std;


bool checkPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int totalPrime(int s, int e){
    int count=0;
    for(int i=s;i<=e;i++){
        if(checkPrime(i))
            count++;
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
