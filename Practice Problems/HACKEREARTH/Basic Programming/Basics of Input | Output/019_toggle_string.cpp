#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;      // upper + 32 = lower
        }
        else
        {
            s[i]-=32;     // lower - 32 = upper
        }
    }
    cout<<s;
}
