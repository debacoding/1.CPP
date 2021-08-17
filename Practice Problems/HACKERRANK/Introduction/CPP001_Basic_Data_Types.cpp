/* The floating point value should be correct up to 3 decimal places and the double to 9 decimal places. */

#include<bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<"\n";
    cout<<fixed<<setprecision(9)<<e<<"\n";
    return 0;
}

/*
Sample Input

3 12345678912345 a 334.23 14049.30493
Sample Output

3
12345678912345
a
334.230
14049.304930000
*/
