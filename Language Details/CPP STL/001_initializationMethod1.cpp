/*
Syntax:
pair (data_type1, data_type2) Pair_name
*/
// Initializing of pair STL (method 1)
#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<string, double> PAIR1;

	PAIR1.first = "GeeksForGeeks";
	PAIR1.second = 1.23;

	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;

	return 0;
}
/*
Output:
GeeksForGeeks 1.23
*/
