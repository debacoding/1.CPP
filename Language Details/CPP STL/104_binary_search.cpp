#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int target;
	cin >> target;
	
	
	sort(arr, arr + n);
	cout << "\nThe array after sorting is : \n";
	for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

	if (binary_search(arr, arr + n, target))
		cout << "\nElement found in the array";
	else
		cout << "\nElement not found in the array";


	return 0;
}
/*
Input:
5
Output:
The array after sorting is : 
0 1 2 3 4 5 6 7 8 9 
Element found in the array
*/ 
