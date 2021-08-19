#include <bits/stdc++.h>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

// class isosceles inherited from class triangle
class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};

// class equilateral inherited from class isosceles
class Equilateral : public Isosceles{
      public:
          void equilateral(){
            cout<<"I am an equilateral triangle\n";
          }
};

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
