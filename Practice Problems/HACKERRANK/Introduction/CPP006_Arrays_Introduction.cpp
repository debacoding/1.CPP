/* Reverse the array elements. */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n; // array size
    int arr[n];
    for(int i = 0; i < n; i++){ // original array
        cin>>arr[i];
    }
    for(int i = n - 1; i >= 0; i--){ // reverse array
        cout<<arr[i]<<" ";
    }
    return 0;
}


/*
Sample Input

4
1 4 3 2
Sample Output

2 3 4 1

*/
