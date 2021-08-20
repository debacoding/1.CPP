#include<bits/stdc++.h>
using namespace std;

void convert10tob(int num, int base)
{
     if (num == 0)
        return;
     int rem = num % base;
     num = num / base;
     if (rem < 0)
        num = num + 1; 
     convert10tob(num, base);
     cout<< rem < 0 ? rem + (base * -1) : rem;
     return;
}

int main()
{
    int number,base;
    cout<<"Enter the integer to convert: ";
    cin>>number;
    cout<<"Enter the base <= number: ";
    cin>>base;
  
    if (number != 0)
    {
        convert10tob(number, base);
        cout<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}

