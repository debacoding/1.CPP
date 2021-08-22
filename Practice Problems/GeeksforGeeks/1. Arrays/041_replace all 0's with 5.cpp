// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    if(n == 0) return 0; // number is 0 
    
    int lastDigit = n % 10;
    if(lastDigit == 0) lastDigit = 5; // replace last digit with 5 if 0
    
    return convertFive(n / 10) * 10 + lastDigit; // now function takes another digit
}
