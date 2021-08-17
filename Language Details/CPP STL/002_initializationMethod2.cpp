// Initializing of pair STL (method 2)
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<string, double> PAIR2;

	PAIR2 = make_pair("GeeksForGeeks", 1.23);

	cout << PAIR2.first << " ";
	cout << PAIR2.second << endl;

	return 0;
}
/*
Output:
GeeksForGeeks 1.23
*/
