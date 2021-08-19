/*
find product of all nos. of an array of size n using modulo (10^9) + 7
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, v;
    unsigned long long int prod = 1;
    cin >> n; // array size

    while (n--){

        cin >> v; // array elemnts
        prod = (prod*v) % (1000000000 + 7);
    }

    cout << prod;

    return 0;

}
