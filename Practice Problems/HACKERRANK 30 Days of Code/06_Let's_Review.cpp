#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; // test cases

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str; // input string

        for (int j = 0; j < str.length(); j++) {
            if (j % 2 == 0) cout << str[j]; // even-indexed character 
        }

        cout << " ";

        for (int j = 0; j < str.length(); j++) {
            if (j % 2 != 0) cout << str[j]; // odd-indexed character
        }

        cout << endl;
    }

    return 0;
}

/*
Sample Input

2
Hacker
Rank
Sample Output

Hce akr
Rn ak
*/
