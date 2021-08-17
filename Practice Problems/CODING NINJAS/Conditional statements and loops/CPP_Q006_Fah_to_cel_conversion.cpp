/*
Sample Input :
0 
100 
20
Sample Output :
0   -17
20  -6
40  4
60  15
80  26
100 37
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int s,e,w,i,cel; // here i is Fah value
    cin>>s; // Start Fahrenheit Value
    cin>>e; // End Fahrenheit value
    cin>>w; // Step Size
    
    for(i=s;i<=e;i+=w)
    {
        cel=(i-32)/1.8; // formula for fah to cel conversion, i.e (5*(i-32))/9
        cout<<i<<"\t"<<cel<<endl;
    }
    return 0;
}
