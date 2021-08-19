/*
1. Take two arrays of size n
2. set Ai = Ai - Bi if Ai >= Bi
3. find min no. of steps reqd to make all a's equal and if not possible print -1
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,min=5001,steps=0,f=0;
    cin>>n; // array size

    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i]; // array a elements

    if(a[i]<min)
    min=a[i];
    }

    for(int i=0;i<n;i++)
    cin>>b[i]; // array b elements

    for(int i=0;i<n;i++)
    {
        while(a[i]>min && b[i]!=0)
        {
        a[i]-=b[i];
        steps++;
        }

        if(a[i]<min)
        {
            min=a[i];
            i=-1;
        }

        if(a[i]<0)
        {
        f=-1;
        break;
        }
    }

    if(f==-1)
    cout<<"-1";
    else
    cout<<steps;

}
return 0;
}
