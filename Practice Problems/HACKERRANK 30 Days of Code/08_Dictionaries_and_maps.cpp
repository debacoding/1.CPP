#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; // no. of entries in phone_book
    string name; // name of person
    cin >> N; 

    map<string, int> phone_book; // phone_book created

    for (int i = 0; i < N; i++) {
        cin >> name;

        if (!phone_book[name]) {
            cin >> phone_book[name]; // entering names to phone_book
        }
    }

    while (cin>>name) {

        if (phone_book[name]) {
            cout << name << "=" << phone_book[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}

/*
Sample Input

3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
Sample Output

sam=99912222
Not found
harry=12299933
*/
