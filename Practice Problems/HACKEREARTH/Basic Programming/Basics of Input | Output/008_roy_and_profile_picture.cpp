#include<bits/stdc++.h>
using namespace std;

int main(){
int L;
cin>>L; // length

int N;
cin>>N; // test cases

while(N--){

int W, H; // width, height
cin>>W>>H; 

if(W<L || H<L){
   cout<<"UPLOAD ANOTHER"<<endl;
}
else if(W>=L && H>=L){
if(W==H){
cout<<"ACCEPTED"<<endl;
}
else{
cout<<"CROP IT"<<endl;
}
}
}
return 0;
}
