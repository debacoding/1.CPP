#include <iostream>
using namespace std;

int main() {
	int a=10,b=5;

    cout << a + b <<endl; //Addition
    cout << a - b <<endl; //Subtraction
    cout << a / b <<endl; //Division
    cout << a * b <<endl; //Multiplication

    cout << a % b <<endl; //Modulo -> Remainder

    cout << ++a <<endl; //Pre-Increment
    cout << --a <<endl; //Pre-decrement
    cout << a++ <<endl; //Post-Increment
    cout << a-- <<endl; //Post-decrement
	return 0;
}

/*
Output:
15
5
2
50
0
11
10
10
11
*/
