#include <iostream>
using namespace std;
class Website{
public:
   //Default constructor
   Website() {
      cout<<"Welcome to BeginnersBook"<<endl;
   }
};
int main(void){
   /*creating two objects of class Website.
    * This means that the default constructor
    * should have been invoked twice.
    */
   Website obj1;
   Website obj2;
   return 0;
}

/*
Output:

Welcome to BeginnersBook
Welcome to BeginnersBook
