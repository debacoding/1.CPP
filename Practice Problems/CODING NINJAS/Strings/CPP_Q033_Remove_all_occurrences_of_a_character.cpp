#include <bits/stdc++.h>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
   
   string output;
   for(int i=0;i<input.size();i++){
       if(input[i]!=c){
           output+=input[i];
       }
   }
   return output;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    
    return 0;
}
