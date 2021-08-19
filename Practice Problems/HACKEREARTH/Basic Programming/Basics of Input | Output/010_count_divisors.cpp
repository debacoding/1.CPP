/*
1. Take 3 integers l,r,k
2. Find count of nos. b/w l and r (both inclusive) that are divisible by k 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,r,k;
	cin >> l >> r >> k;

	int count = 0;

	int x;
	for(x = l; x <= r; x++){
		if(x % k == 0){
			count++;
		}
	}
    
  cout << count << endl;

	return 0;
}
