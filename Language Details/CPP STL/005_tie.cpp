// tie()
#include <bits/stdc++.h>
using namespace std;

int main()
{
	pair<int, int> pair1 = { 1, 2 }; 

	int a, b;
	tie(a, b) = pair1; // tie() declared
	cout << a << " " << b << "\n";

	pair<int, int> pair2 = { 3, 4 };
	tie(a, ignore) = pair2; // “ignore” keyword ignores a particular
	                        // tuple element from getting unpacked
	cout << a << " " << b << "\n"; // prints old value of b

	// Illustrating pair of pairs
	pair<int, pair<int, char> > pair3 = { 3, { 4, 'a' } };

	int x, y;
	char z;
	
	// tie(x,y,z) = pair3; Gives compilation error
	// tie(x, tie(y,z)) = pair3; Gives compilation error
	// Each pair needs to be explicitly handled
	x = pair3.first;
	tie(y, z) = pair3.second;
	cout << x << " " << y << " " << z << "\n";

	cout << "Concatenate first of pair 1 and 2: " << pair1.first + pair2.first << endl;
	
}
/*
Output : 
1 2
3 2
3 4 a
Concatenate first of pair 1 and 2: 4
*/
