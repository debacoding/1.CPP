#include<iostream>
using namespace std;

class StaticFunction
{
   public:
    static int my_var;
    static void display()
    {
        cout<<"Static member function"<<endl;
    }
};

int StaticFunction::my_var=50;

void demo()
{
    static int count = 1;
    cout <<"Value of count is - "<< count <<endl;
    count++;
}

int main()
{
    for (int i=1; i<=5; i++)
        demo();

    StaticFunction::display();

    StaticFunction ob;
    cout <<"Value is : "<<ob.my_var<<endl;

    return 0;
}

/*
Output:
Value of count is - 1
Value of count is - 2
Value of count is - 3
Value of count is - 4
Value of count is - 5
Static member function
Value is : 50
