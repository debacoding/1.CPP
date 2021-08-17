#include <iostream>
using namespace std;
int main(){
  
   // character array declaration
   char book[50];
   cin>>book;
   cout<<book<<endl;
  /*
Input:
hello world

Output:
hello
*/
   // user input string using cin.get
   char name[50];
   cout<<"Enter your name:"<<endl;
   cin.get(name, 50);
   cout<<"You entered: "<<name<<endl;
/*
Input:
Enter your name:
hello world

Output:
You entered:
hello world
*/
  
  // create string object
   string str;
   cout<<"Enter a String:";
   /* This is used to get the user input
    * and store it into str
    */
   getline(cin,str);
   cout<<"You entered: "<<endl;
   cout<<str<<endl;

   /* This function adds a character at
    * the end of the string
    */ str.push_back('A');
   cout<<"The string after push_back: "<<str<<endl;
   /* This function deletes a character from
    * the end of the string
    */
   str.pop_back();
   cout << "The string after pop_back: "<<str<<endl;
  
/*
Input:
Enter a String:
hello world

Output:
You entered: hello world
The string after push_back: hello worldA
The string after pop_back: hello world
*/
   
   return 0;
}

