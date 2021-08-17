/*
One important thing to note is that, you should override the pure virtual function of the base class in the derived class.
If you fail to override it, the derived class will become an abstract class as well.
*/


#include<iostream>
using namespace std;
class Animal{
public:
   //Pure Virtual Function
   virtual void sound() = 0;

   //Normal member Function
   void sleeping() {
      cout<<"Sleeping";
   }
};
class Dog: public Animal{
public:
   void sound() {
      cout<<"Woof"<<endl;
   }
};
int main(){
   Dog obj;
   obj.sound();
   obj.sleeping();
   return 0;
}
