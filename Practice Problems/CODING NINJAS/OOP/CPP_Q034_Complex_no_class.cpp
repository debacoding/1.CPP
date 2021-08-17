#include<bits/stdc++.h>
using namespace std;

class ComplexNumbers {
    private:  
    int r,i;
    
    public: 
    
    // parameterized constructor
    ComplexNumbers(int real, int imag){ 
        r = real;
        i = imag;
    }
    
    // adds two given complex numbers and updates the first complex number
    void plus(ComplexNumbers c2){
        r += c2.r;
        i += c2.i;
    }
    
    // multiplies two given complex numbers and updates the first complex number
    void multiply(ComplexNumbers c2){
        int temp = r;
        r = (r*c2.r) - (i*c2.i);
        i = (temp*c2.i) + (i*c2.r);
    }
    
    void print(){
        cout<<r<<" + i"<<i;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
     // if C1 = 4 + i5 and C2 = 3 +i1
     // C1.plus(C2) results in: 
    // C1 = 7 + i6 and C2 = 3 + i1
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
      // if C1 = 4 + i5 and C2 = 1 + i2
      // C1.multiply(C2) results in: 
     // C1 = -6 + i13 and C2 = 1 + i2
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}
