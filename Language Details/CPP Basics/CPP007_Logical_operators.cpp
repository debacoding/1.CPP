#include <iostream>
using namespace std;

int main() {
	 // AND - &&
    // True only when both the expressions are true

    cout << (7>5 && 5!=10) <<endl;
    cout << (2>5 && 5!=10) <<endl;

    // OR - ||
    // True when both the expressions are true or only one of them is true.

    cout << (2>5 || 5!=10) <<endl;
    cout << (2>5 || 5!=5) <<endl;

    // NOT - !
    // Return true if result is false and vice versa.
    cout << !(7>5 && 5!=10) <<endl;
	return 0;
}

/*
Output:
1
0
1
0
0
*/
