/*   */


#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<(a+b)<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
    
  
    return 0;
}


/*
Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
*/
