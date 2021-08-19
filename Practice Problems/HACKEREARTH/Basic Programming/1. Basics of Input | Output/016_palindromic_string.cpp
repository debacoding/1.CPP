#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin >> ws,s);

	// comparing string s with the reversed string s 
	// rbegin() returns reverse iterator to last of original string
	// rend() returns reverse iterator to the first character f original string
	// The result is that a new string that is the reversed version of the original is constructed, and if that new string is equal to the original then it's a palindrome and the function returns true. 
    if(s == string(s.rbegin(),s.rend())) {
     cout<<"YES"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
}	
