/*
* input no. of test cases
* input length of a string
* input string that consists of only 1,2,3
* swap any two adj. characters only if abs. diff. b/w them is 1 ,i.e.,only '3,2' and '2,1' possible
* all the 2s can come any where as it can be swapped with anyone
* determine the smallest number that can be formed
*/

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
