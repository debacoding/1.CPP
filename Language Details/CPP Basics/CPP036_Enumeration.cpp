#include<iostream>
using namespace std;
enum direction {East=01, West=02, North=03, South=04};
int main()
{
   direction dir = West;
   cout<<dir;
   return 0;
}

/*
Output:
2
*/
