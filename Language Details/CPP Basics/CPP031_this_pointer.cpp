#include <iostream>
using namespace std;
class Demo {
private:
  int num;
  char ch;
public:
  void setMyValues(int num, char ch){
    this->num =num;
    this->ch=ch;
  }
  void displayMyValues(){
    cout<<num<<endl;
    cout<<ch;
  }
};
int main(){
  Demo obj;
  obj.setMyValues(100, 'A');
  obj.displayMyValues();
  return 0;
}
/*
Output:

100
A
Example 2
*/

// function chaining calls using this pointer
/*
#include <iostream>
using namespace std;
class Demo {
private:
  int num;
  char ch;
public:
  Demo &setNum(int num){
    this->num =num;
    return *this;
  }
  Demo &setCh(char ch){
    this->num++;
    this->ch =ch;
    return *this;
  }
  void displayMyValues(){
    cout<<num<<endl;
    cout<<ch;
  }
};
int main(){
  Demo obj;
  //Chaining calls
  obj.setNum(100).setCh('A');
  obj.displayMyValues();
  return 0;
}

Output:

101
A
*/
