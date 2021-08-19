#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,f=0;            
    string s,p;
    cin>>n>>s;
    p=s;                    //p=string same as string s
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            s[i]='B';      //replacing all dots with a fence i.e B
        }
    }
    x=p.compare(s);        //comparing the updated string s with the original string
    for(int j=0;j<n;j++)
        {
            if((s[j]=='H' && s[j+1]=='H'))  //checking if two H's are together
            {
                f=-1;
                break;
            }
        }
    if((f==-1 || x==0 ) && n!=1) // Initially f = 0 , if f becomes -1 , it means that in the updated string s two H are together (which we don't want) n=1 means , there is only one character in the string  
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl<<s<<endl;
    }
}

