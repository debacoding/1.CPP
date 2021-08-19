#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t; // test cases

    string s; 
    int count=0;   //no. of matchsticks   
    
    while(t--)
    {
        cin>>s; // num

        for(int i=0;i<s.length();i++)  //counting total number of matchsticks used
        {
            if(s[i]-'0'==0)    // num = 0       
            count+=6;         // matchsticks = 6     
            else if(s[i]-'0'==1)  // num = 1
            count+=2;            // matchsticks = 2
            else if(s[i]-'0'==2)
            count+=5;
            else if(s[i]-'0'==3)
            count+=5;
            else if(s[i]-'0'==4)
            count+=4;
            else if(s[i]-'0'==5)
            count+=5;
            else if(s[i]-'0'==6)
            count+=6;
            else if(s[i]-'0'==7)
            count+=3;
            else if(s[i]-'0'==8)
            count+=7;
            else if(s[i]-'0'==9)
            count+=6;
            else
            cout<<"";
        }

        if(count%2==0) // no. of matchsticks if even
        {
			// maximum number that can be formed will be 1111... where no. of 1s are equal to (no. of matchsticks)/2
            for(int j=0;j<count/2;j++)
            cout<<"1";
            count=0;
        }
        else{
			// we have to include 7 also as it is made up of 3 matchsticks
            cout<<"7";                        
            for(int p=1;p<(count-1)/2;p++)
            cout<<"1";
            count=0;
        }
        cout<<endl;
    }
}
