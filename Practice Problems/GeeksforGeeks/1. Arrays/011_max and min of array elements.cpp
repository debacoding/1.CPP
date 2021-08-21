#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int testCases, size;
    cin >> testCases;
    int arr[100];

    while (testCases--)
    {
        cin >> size; // array size
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i]; // enter array elements
        }

        int MAX = arr[0], MIN = arr[0]; // initially element at first index is considered max and min
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= MAX)
            {
                MAX = arr[i];
            }
            else if (arr[i] <= MIN)
            {
                MIN = arr[i];
            }
        }
        cout << MAX << " " << MIN << endl;
    }
	
	return 0;
}
