/*
Operator that are not overloaded are follows
~ scope operator - ::
~ sizeof
~ member selector - .
~ member pointer selector - *
~ ternary operator - ?:
*/


#include <iostream>
using namespace std;

class MinusOverload {
private:
 int a;
 int b;

public:
 void Distance()
 {
 a = 0;
 b = 0;
 }

 MinusOverload(int f, int i)
 {
 int c;
 a = f;
 b = i;
 c = a - b;
 cout << "\nC:" << c<<endl;
 }

 void display()
 {
 cout << "A: " << a << " B: " << b << endl;
 }

 MinusOverload operator-()
 {
 a = -a;
 b = -b;
 return MinusOverload(a, b);
 }
};

int main()
{
 MinusOverload M1(6, 8), M2(-3, -4);
 -M1;
 M1.display();
 -M2;
 M2.display();
 return 0;
}

/*
Output:
C:-2

C:1

C:2
A: -6 B: -8

C:-1
A: 3 B: 4
