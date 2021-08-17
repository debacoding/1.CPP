/*
Sample input :
5 
1 1 2 2 3
3
Sample output :
Count of pairs is 3 // (2,3), (2,3), (1,2,2)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; //size of array
    cin >> n;
  
    int arr[n];
    // taking input in arr
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    int sum;
    cin >> sum;
  
    int count = 0; // Initialize result
    // Consider all possible pairs and check their sums
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) //j is an index next to ith index
            if (arr[i] + arr[j] == sum)
                count++;
    cout << "Count of pairs is " << count;
    return 0;
}
