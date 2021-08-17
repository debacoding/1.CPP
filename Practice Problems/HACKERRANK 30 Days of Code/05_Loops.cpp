#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i < 11; i++) {
        printf("%i x %i = %i\n", N, N * i); // num, mutiplication table of num till 10
    }

    return 0;
}
