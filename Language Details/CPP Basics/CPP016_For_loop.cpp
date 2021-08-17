#include <iostream>
using namespace std;

int main() {
    /*
        for(initialization;condition;inc/dec)
            instructions_to_repeat;
    */
    for(int i=1; i<=6; i++){
      /* This statement would be executed
       * repeatedly until the condition
       * i<=6 returns false.
       */
      cout<<"Value of variable i is: "<<i<<endl;
   }
   
   // infinite loop
   /*
   for ( ; ; ) {
   // statement(s)
   }
   */
   for(int i=1; i>=1; i++){
      cout<<"Value of variable i is: "<<i<<endl;
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
