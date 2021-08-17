#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n) {
    
    int low = 0;
    int high = n - 1;
    int mid = 0;
 
    // Iterate till all the elements are sorted
    while (mid <= high) {
        switch (arr[mid]) {
 
        // If the element is 0
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}

int main() {
    int t;
    cin >> t; // no. of test cases or queries 

    while (t > 0) {
        int n;
        cin >> n;
      
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
      
        sort012(arr, n);
      
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
