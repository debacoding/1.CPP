#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,i,fact = 1;
	cin>>num;
	
	if (num <= -1){
	    cout<<"Error!"<<endl;
	} else if (num == 0 || num == 1){  // 0! = 1! = 1
	    cout<<"1"<<endl;
	} else{
	    for(i = 1; i <= num; i++){
	        fact *= i;
	    }
	    cout<<"Factorial: "<<fact<<endl;
	}	
	return 0;
}
