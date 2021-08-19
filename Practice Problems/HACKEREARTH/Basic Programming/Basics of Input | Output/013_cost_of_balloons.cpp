/*
1. input no.of test cases
2. input green and purple balloon costs
3. input no. of paricipants
4. input count of 1st prob. solved and 2nd prob. solved
5. input 1st  and 2nd prob.
6. 1st prob. solved increment count and same for 2nd prob.
7. for cost calculation, (a) Use green-colored balloons for the first problem and purple-colored balloons for the second problem, (b) Use purple-colored balloons for the first problem and green-colored balloons for the second problem
8. calculate min(cost1,cost2)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t; // test cases

while(t--){
    int g,p,f,s;
    cin>>g>>p; // green balloon cost, purple balloon cost

    int n;
    cin>>n; // no. of participants

	int cn1=0,cn2=0; // count of 1st and 2nd prob. solved

    for(int i=1;i<=n;i++){

        cin>>f>>s; // 1st prob. and 2nd prob.
        if(f==1) cn1++; // 1st prob. solved and count increment
         if(s==1) cn2++; // 2nd prob. solved and count increment
    }

int cost1=(cn1*g)+(cn2*p); // Use green-colored balloons for the first problem and purple-colored balloons for the second problem
int cost2=(cn1*p)+(cn2*g); // Use purple-colored balloons for the first problem and green-colored balloons for the second problem
cout<<min(cost1,cost2)<<endl; // min. cost
}
return 0;
}
