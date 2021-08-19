/*
1. input string of length 9
2. in format DDXDDD-DD where D is non-negative digit and X is an uppercase english letter
3. valid if aum of every two consecutive digits is even and its letter is not a vowel (AEIOUY)
4. determine if valid or invalid
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s; // input string

   // sum of consecutive digits is even and non-negative
	// letter is not vowel
	if((((s[0]-'0')+(s[1]-'0'))%2==0)&&(((s[3]-'0')+(s[4]-'0'))%2==0)&&(((s[4]-'0')+
     (s[5]-'0'))%2==0)&&(((s[7]-'0')+(s[8]-'0'))%2==0)&&(s[2]!='A') && 
     (s[2]!='E') && (s[2]!='I') && (s[2]!='O') && (s[2]!='U') && (s[2]!='Y') )
    {
        cout<<"valid"<<endl;
    }
    else
    {
        cout<<"invalid"<<endl;
    }	
}
