#include<bits/stdc++.h>
using namespace std;

void printSubstrings(string input) {
   
    for(int i=0;i<input.length();i++){
        for(int len=1;len<=input.length()-i;len++){
            cout<<input.substr(i,len)<<endl;
           }
     }
}

int main() {
    string input;
    getline(cin, input); //input
    
    printSubstrings(input); //output
    return 0;
}
