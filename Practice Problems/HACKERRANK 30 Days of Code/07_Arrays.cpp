#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; // array size

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; // original array
    }

    reverse(arr, arr + N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";  // reversed array
    }

    return 0;
}
