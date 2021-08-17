#include <bits/stdc++.h>
using namespace std;

string reverseEachWord(string input){ 
    string bigStr="",str="";
    
    for(int i=0;i<input.size();i++){
        str=str+input[i];
        if(input[i+1]==' '||input[i+1]=='\0'){
            reverse(str.begin(),str.end());
            bigStr=bigStr+str+' ';
            str="";
            i++;
        }
    }
    return bigStr;
}

int main(){

    string str;
    getline(cin, str);
    
    string ans = reverseEachWord(str);
    cout << ans << endl;
    
}
