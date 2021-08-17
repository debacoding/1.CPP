#include <iostream>
using namespace std;

int main() {
	int i=1;
   /* The loop would continue to print
    * the value of i until the given condition
    * i<=6 returns false.
    */
   while(i<=6){
      cout<<"Value of variable i is: "<<i<<endl; i++;
   }
  
  // infinite while loop 
  int x=1; while(x<=6) {
      cout<<"Value of variable x is: "<<i<<endl; x--;
   } 
	return 0;
}

/*
Output:

Value of variable i is: 1
Value of variable i is: 2
Value of variable i is: 3
Value of variable i is: 4
Value of variable i is: 5
Value of variable i is: 6
*/