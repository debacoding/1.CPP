// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	     int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	    // number is multiplied by 2 and 3 
	    // and concatenated with original number
	    string str = to_string(n) + to_string(n*2) + to_string(n*3);

        
       for(int i=0; i<=str.length(); i++){
            if(str[i] == '1')
               one ++;
            if(str[i] == '2')
               two ++; 
            if(str[i] == '3')
               three ++; 
            if(str[i] == '4')
               four ++; 
            if(str[i] == '5')
               five ++; 
            if(str[i] == '6')
               six ++;
            if(str[i] == '7')
               seven ++;
            if(str[i] == '8')
               eight ++;
            if(str[i] == '9')
               nine ++;   
        }
        // concatenated number must have all digits 
        // from 1 to 9 exactly once
        if(one == 1 && two == 1 && three == 1 && four == 1 && five == 1 && six == 1 && seven == 1 && eight == 1 && nine == 1)
           return true;
        else
           return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}  // } Driver Code Ends
