/*
Input:
2456
Output:
EvenSUM:12 OddSUM:5    // (2+4+6)=12
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,dig,evenSum = 0,oddSum = 0;
	cin>>num;
	
	while(num>0){
	    
	    dig = num % 10;
	    
	    if (dig % 2 == 0){
	        evenSum += dig;
	    } else{
	        oddSum += dig;
	    }
	   
	   num /= 10; 
	    
	}
	
	cout<<"EvenSUM:"<<evenSum<<" "<<"OddSUM:"<<oddSum<<endl;
	
	return 0;
}

