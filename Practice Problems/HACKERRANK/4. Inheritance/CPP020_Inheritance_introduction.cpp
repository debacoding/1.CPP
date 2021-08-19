#include <bits/stdc++.h>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

// class Isosceles derived from class Triangle
class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		//Write your code here.
        void description(){
            cout<<"In an isosceles triangle two sides are equal\n";
        }  
};

int main(){
    Isosceles isc; //  derived class object "isc"
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}

/*
Sample Output

I am an isosceles triangle
In an isosceles triangle two sides are equal
I am a triangle
