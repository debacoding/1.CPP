#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, arr + n, greater<int>());
 
    cout << "Array after sorting in descending order : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    return 0;
}
/*
Output:
Array after sorting in descending order : 
9 8 7 6 5 4 3 2 1 0
*/ 
