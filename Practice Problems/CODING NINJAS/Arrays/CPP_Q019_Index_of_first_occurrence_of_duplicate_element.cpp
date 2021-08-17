#include <bits/stdc++.h>
using namespace std;

int foundkey(int a[],int n,int k){ 
    for(int i=1;i<=n;i++){ 
    
    // for first occurrence
        if(a[i]==k){
            return (i);
        }
}
return -1;
}

int main() {

    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    
    int ans=foundkey(arr,n,key);
    cout<<ans;
    
    return 0;

}
