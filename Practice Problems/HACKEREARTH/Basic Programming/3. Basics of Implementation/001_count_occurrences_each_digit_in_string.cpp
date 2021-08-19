#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin >> ws,s); // input string

	for(int i = 0; i < s.length(); i++){
		cin >> s[i]; // fill string 
	}

	int counters[10] = {0}; // init all the counters with 0

	for(int i = 0; i < s.length(); i++){
		char c = s[i]; // string stored in char array
        if (isdigit(c)) { // if char array ekement is a digit
            int index = c - '0'; // c is from '0' to '9' (i.e. ASCII codes 48..57); need it from 0..9; char('0') stands for int(49).
            counters[index]++;  // increment the counter representing the respective digit
		}	  
	}
	for(int i = 0; i < 10; i++){
		cout << i << " " << counters[i] << endl; // print digit and its coubt of occurrence
	}
}
