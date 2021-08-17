#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    
    int wstart,slength;
    string word,newString;
    wstart = input.size()-1;
    while(wstart>0){
		slength = 0;
        //get the starting index and length of every word from reverse
        while(input[wstart]!=' ' && wstart!=-1){
            wstart--;
            slength++;
        }
        //extract word from end by using substr method
        word = input.substr(wstart+1,slength);
        //append to new string
        newString+=word;
        //add space after every word except last word
        if(wstart!=-1)
            newString+=' ';
        wstart--;   
    }
    return newString; 
}

int main()
{
    string s;
    getline(cin, s);
  
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
