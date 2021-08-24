#include <bits/stdc++.h>
using namespace std;


int main() {
    int x; // marks
    string y; // student name
    cin >> x;
    map <string,int> m;
    while (cin>>x>>y)
        switch (x) {
            case 1: cin>>x; m[y]+=x; break;
            case 2: m.erase(y); break;
            case 3: cout << m[y] << endl;
        }
    return 0;
}
