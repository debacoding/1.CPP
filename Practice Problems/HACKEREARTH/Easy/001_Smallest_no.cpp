#include<bits/stdc++.h>
using namespace std;

int main(){

 int t; 
 cin>>t; // test cases

 while(t--){

    long long int n;
    cin>>n; // length of string

    string s;
    cin>>s; // input string

    string ans;
    string ans2;

    for(int i=0;i<n;i++){

        if(s[i]!='2')
          ans+=s[i];
        else ans2+="2";
    }

    for(int i=0;i<ans.size();i++){ 
      if(ans[i]=='1')
        cout<<ans[i];
      else
        break;
    }

    cout<<ans2;

    for(int j=i;j<ans.size();j++){
       cout<<ans[j];
    }

   cout<<endl;
  }

  return 0;
}
