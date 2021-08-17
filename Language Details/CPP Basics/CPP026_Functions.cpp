#include <iostream>
using namespace std;
/* This function adds two integer values
 * and returns the result
 */
int sum(int num1, int num2){
   int num3 = num1+num2; return num3;
}

int main(){
   //Calling the function
   cout<<sum(1,99);
   return 0;
}

// OR
/*
#include <iostream>
using namespace std;
//Function declaration
int sum(int,int);

//Main function
int main(){
   //Calling the function
   cout<<sum(1,99);
   return 0;
}
/* Function is defined after the main method 
 */
 /*
int sum(int num1, int num2){
   int num3 = num1+num2;
   return num3;
}
*/
