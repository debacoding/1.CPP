/*
Create a Class Shape having a field shapeType and a function printMyType.
Create another class, Square and Rectangle, which inherits the Shape class and has additional fields length and breadth. Both Square and Rectangle classes will have two functions calculateArea, which will return the object's area, and printMyType, which will print the type of the object.
Inside the main, first create the object of class Square and have a length equal to 5 and call the printMyType then calculateArea method after creating the object of class Rectangle having the length equal to 5 and breadth equal to 4 and again call the printMyType and calculateArea method.
*/

#include<bits/stdc++.h>
using namespace std;

class Shape{

  private:
    string shapeType;

   public:
    Shape(string type){
           shapeType = type;
       }

    void printMyType(){
           cout<<this->shapeType<<endl;
       }

};

class Square : public Shape {

  private:
    int length;

   public:
    Square(int L,string s ="square"):Shape(s){
         length = L;
       }

    void printArea(){
           cout << length*length << endl;
       }

};

class Rectangle : public Shape {

  private:
    int length;
    int breadth;

   public:
    Rectangle(int L,int B,string r="rectangle"):Shape(r){
           length = L;
           breadth = B;
       }

   void printArea(){        
           cout << length*breadth << endl;
       }

};

int main() {

   Square s1(5);

   s1.printMyType();
   s1.printArea();

   Rectangle r1(5,4);

   r1.printMyType();
   r1.printArea();

    return 0;
}
