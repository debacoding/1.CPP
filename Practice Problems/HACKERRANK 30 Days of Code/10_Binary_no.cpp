/*
1) convert a num in base 10 to base 2 
2) find max no. of consecutive 1s in base 2 num
3) represent that max no.of consecutive 1s in base 10
Eg : (125) base 10
     (1111101) base 2
      5
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // number in base 10

    int sum = 0;
    int max = 0;

    while (n > 0) {
        if (n % 2 == 1) {

            sum++;

            if (sum > max) max = sum;

        } else sum = 0;

        n = n / 2;
    }

    cout << max;

    return 0;
}
