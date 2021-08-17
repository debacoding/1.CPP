#include <iostream>
using namespace std;

int main() {
	for(int i=1;i<=10;i++) {
        if(i==3)
            continue; //Everything after continue WONT BE executed.
        //But the loop wont stop, it skips the current iteration instructions.
        if(i==5)
            break;//Everything after break WONT BE executed and the control comes out from the loop.
        //The particular loop stops execution once break statement is encountered.
        cout<<"Multiplication table of "<<i<<endl;
        for(int j=1;j<=10;j++) {
                if(j==5)
                    break; //Wont print after first 4 rows for each table
            cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
        }
        cout<<endl;
    }
	return 0;
}

/*
Output:
Multiplication table of 1
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
1 x 4 = 4

Multiplication table of 2
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8

Multiplication table of 4
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
*/

