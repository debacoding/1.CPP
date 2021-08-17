#include <iostream>
using namespace std;
class Addition {
public:
    // different no. of parameters
    int sum(int num1,int num2) {
        return num1+num2;
    }
    int sum(int num1,int num2, int num3) {
       return num1+num2+num3;
    }
  
    // different data type of function and arguments
    int demoFunction(int i) {
        return i;
    }
    double demoFunction(double d) {
        return d;
    }
};
int main(void) {
    Addition obj,demo;
    cout<<obj.sum(20, 15)<<endl;
    cout<<obj.sum(81, 100, 10)<<endl;
  
    cout<<demo.demoFunction(100)<<endl;
    cout<<demo.demoFunction(5005.516);
  
    return 0;
}

/*
Output:
35
191
100
5005.52
*/
