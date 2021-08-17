#include <iostream>
using namespace std;
int main(){
   int num=5;
   
   switch(num+2) { // switch case without break
      case 1: 
        cout<<"Case1: Value is: "<<num<<endl;
      case 2: 
        cout<<"Case2: Value is: "<<num<<endl;
      case 3: 
        cout<<"Case3: Value is: "<<num<<endl;
      default: 
        cout<<"Default: Value is: "<<num<<endl;
   }
   
   int i=2;
   switch(i) { // switch case with break
      case 1:
        cout<<"Case1 "<<endl;
        break;
      case 2:
        cout<<"Case2 "<<endl;
        break;
      case 3:
        cout<<"Case3 "<<endl;
        break;
      case 4:
        cout<<"Case4 "<<endl;
        break;
      default:
        cout<<"Default "<<endl;
    }
   
   char ch='b';
   switch(ch) { // switch case with character
      case 'd': cout<<"Case1 ";
      break;
      case 'b': cout<<"Case2 ";
      break;
      case 'x': cout<<"Case3 ";
      break;
      case 'y': cout<<"Case4 ";
      break;
      default: cout<<"Default ";
   }
   return 0;
}

/*
Output:
Default: Value is: 5
Case2 
Case2 
*/