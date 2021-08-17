#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
void printStudentInfo(Student);
int main(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"Enter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   printStudentInfo(s);
   return 0;
}
void printStudentInfo(Student s){
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
}


/*
Output: 

Enter Student Name: Rick
Enter Student Roll No: 666123
Enter Student Age: 19
Student Record:
Name: Rick
Roll No: 666123
*/

// return structure to a function

#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
Student getStudentInfo();
void printStudentInfo(Student);
int main(){
   Student s;
   s = getStudentInfo();
   printStudentInfo(s);
   return 0;
}
/* This function prompt the user to input student
 * details, stores them in structure members
 * and returns the structure
 */
Student getStudentInfo(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"Enter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   return s;
}
void printStudentInfo(Student s){
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
}

/*
Output:

Enter Student Name: Tyrion lannister
Enter Student Roll No: 333901
Enter Student Age: 39
Student Record:
Name: Tyrion lannister
Roll No: 333901
Age: 39
Age: 19
