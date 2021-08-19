/*
1. enter a word that consists of x and y where x and y denote no. of Z and O resp.
2. input word is similar to zoo if 2 * x = y
3. determine if the word is similar to zoo
4. max length of this word is 20
*/

#include<bits/stdc++.h>
using namespace std;

void Is_zoo(string s)
{
    int count_z=0,count_o=0; // initial count of Z and O is 0
  
    if(s.length()<=20) // length of string <= 20
    {
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i]=='z')
            count_z++;
            if(s[i]=='o')
            count_o++;
        }
        if(2*count_z==count_o) // 2 * x = y
        cout<<"Yes";
        else
        cout<<"No";
    }
}

int main()
{
    string str;
    cin>>str; // input string
  
    Is_zoo(str);
  
    return 0;
}

