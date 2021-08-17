#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; //size of array
    cin>>n;
    
    int arr[n]; 
    for (int i = 0; i < n; i++){
        cin>>arr[i]; // original array elements
    }
    
    for ( int i = n-1; i >= 0; i--){
        cout<<arr[i]<<" "; // reversed array
    }
        
    return 0;
}
