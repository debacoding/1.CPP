// Initializing of pair STL (method 3)
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<string, double> PAIR3 ("GeeksForGeeks", 1.23);

	cout << PAIR3.first << " ";
	cout << PAIR3.second << endl;

	return 0;
}
/*
Output:
GeeksForGeeks 1.23
*/
