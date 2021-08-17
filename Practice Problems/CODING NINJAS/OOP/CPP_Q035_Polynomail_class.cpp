/*
1. An integer (let's say A) which holds the coefficient and degrees. Use array indices as degree and A[i] as the coefficient of ith degree.
2. An integer holding the total size of array A.
Functions :
1. Default Constructor
2. Copy Constructor
3. SetCoefficient -
This function sets coefficient for a particular degree value. If the given degree is greater than the current polynomial capacity, increase the capacity accordingly and set the required coefficient. If the degree is within limits, the previous coefficient value is replaced by the given coefficient value.
4. Overload "+" Operator (P3 = P1 + P2) :
Adds two polynomials and returns a new polynomial that has the result.
5. Overload "-" Operator (P3 = P1 - P2) :
Subtracts two polynomials and returns a new polynomial which has the result
6. Overload * Operator (P3 = P1 * P2) :
Multiplies two polynomials and returns a new polynomial which has the result
7. Overload "=" Operator (Copy Assignment Operator) -
Assigns all values of one polynomial to another.
8. Print() -
Prints all the terms (only terms with non zero coefficients are to be printed) in increasing order of degree.
Print Pattern For A Single Term : <Coefficient>"X"<Degree>
And multiple terms should be printed separated by space. And after printing one polynomial, print a new line.
*/

/*
Sample Input  :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
1
Sample Output  :
4x0 3x1 -3x2 3x3 -4x5
*/

#include<bits/stdc++.h>
using namespace std;

class Polynomial {
   public:
    int * degCoeff; // Name of your array (Don't change this)
	int capacity;
    
    // default constructor
    Polynomial(){
        this->degCoeff = new int[10];
        this->capacity=10;
         for (int i = 0; i < 10; i++) {
            degCoeff[i] = 0;
        }
    }
    
    // copy constructor
    Polynomial(const Polynomial& p){
        
        this->capacity = p.capacity;
        this->degCoeff = new int[p.capacity];
        for(int i=0;i<p.capacity;i++)
        	this->degCoeff[i] = p.degCoeff[i];
    }
    
    void setCoefficient(int deg, int coeff){
        if(this->capacity<=deg){
            int *newDegCoeff = new int[deg+10];
            for (int i = 0; i < deg+10; i++) {
                newDegCoeff[i] = 0;
            }
            for(int i=0;i<this->capacity;i++){
                newDegCoeff[i] = this->degCoeff[i];
            }
            this->capacity = deg+10;
            delete [] this->degCoeff;
            this->degCoeff = newDegCoeff;            
        }       
    
        this->degCoeff[deg] = coeff;
    }
    
    Polynomial operator + (Polynomial p2){
        Polynomial result;
        
        int i=0,j=0;
        while(i<this->capacity || i<p2.capacity){
            int deg = i;
            int coeff1=0,coeff2=0;
            if(i<this->capacity)
                coeff1=this -> degCoeff[i];
            if(i<p2.capacity)
                coeff2= p2.degCoeff[i];
            int coeff =  coeff1 + coeff2;
            result.setCoefficient(deg, coeff);
            i++;
            
        }
        
        return result;
    }
    
    Polynomial operator - (Polynomial p2){
         Polynomial result;
        int i=0,j=0;
        while(i<this->capacity || j<p2.capacity){
            int deg = i;
            int coeff1=0,coeff2=0;
            if(i<this->capacity)
                coeff1=this -> degCoeff[i];
            if(j<p2.capacity)
                coeff2= p2.degCoeff[j];
            int coeff =  coeff1 - coeff2;
            result.setCoefficient(deg, coeff);
            i++;
            j++;
        }
        return result;
    }
    int getCoeff(int degree) {
        if (degree >= this->capacity) {
            return 0;
        }
        return this->degCoeff[degree];
    }
    Polynomial operator * (Polynomial p2){
        Polynomial result;
        
        for(int i=0;i<this->capacity;i++){
            for(int j=0;j<p2.capacity;j++){
                int deg = i+j;
                int coeff = result.getCoeff(deg) + this->degCoeff[i] * p2.degCoeff[j];
                result.setCoefficient(deg,coeff);
            }
        }
        return result;
    }
    
    Polynomial& operator = (const Polynomial& p2){
        
        this->capacity = p2.capacity;
		this->degCoeff = new int[p2.capacity];
        for(int i=0;i<p2.capacity;i++)
        	this->degCoeff[i] = p2.degCoeff[i];
        return *this;
    }
    
    void print(){
        if(this->capacity==0)
            return;
        for(int i=0;i<this->capacity;i++){
            if(this->degCoeff[i]!=0)
                cout<<this->degCoeff[i]<<"x"<<i<<" ";
        }
    }
    

};

int main() {
    int count1, count2, choice;
    cin >> count1;

    int * degree1 = new int[count1];
    int * coeff1 = new int[count1];

    for (int i = 0; i < count1; i++) {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;
    for (int i = 0; i < count1; i++) {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int * degree2 = new int[count2];
    int * coeff2 = new int[count2];

    for (int i = 0; i < count2; i++) {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++) {
        cin >> coeff2[i];
    }

    Polynomial second;
    for (int i = 0; i < count2; i++) {
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin >> choice;

    Polynomial result;
    switch (choice) {
        // Add
    case 1:
        result = first + second;
        result.print();
        break;
        // Subtract
    case 2:
        result = first - second;
        result.print();
        break;
        // Multiply
    case 3:
        result = first * second;
        result.print();
        break;

    case 4: // Copy constructor
    {
        Polynomial third(first);
        if (third.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
        break;
    }

    case 5: // Copy assignment operator
    {
        Polynomial fourth(first);
        if (fourth.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
        break;
    }

    }

    return 0;
}
