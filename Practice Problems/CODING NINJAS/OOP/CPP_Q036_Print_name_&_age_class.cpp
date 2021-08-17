#include<bits/stdc++.h>
using namespace std;

class Person {
   
    private:
      int age;
      string name;
    
    public:
      void setAge(int age){
          this->age = age;
      }
      void setName(string name){
          this->name = name;
      }
    
      int getAge(){
          return this->age;
      }
      string getName(){
          return this->name;
      }

};

int main() {

   
    Person P;
    int age;
    string name;
    
    cin>>name>>age;
    
    P.setAge(age);
    P.setName(name);
    
    cout<<"The name of the person is "<< P.getName() << " and the age is " << P.getAge() << ".";

    return 0;
}
