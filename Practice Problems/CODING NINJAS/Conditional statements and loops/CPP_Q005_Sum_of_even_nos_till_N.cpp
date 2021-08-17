#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,i,sum=0;
    cin>>n;
    
    for(i=0;i<=n;i+=2){ //0 2 4 6 all in difference of 2
        if(i%2==0){ // no. divided by 2 gives remainder 0
            sum+=i;
        }
    }
    
    cout<<sum;
    return 0;
}
