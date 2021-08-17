#include<bits/stdc++.h>
using namespace std;

class Fraction {

    private:
    int numerator, denominator;
    
    public:
    // parameterized constructor
    Fraction(int nume,int deno){ 
        this->numerator = nume;
        this->denominator = deno;
    }
  
    // adds the two fraction following the adding
    // up of two fraction rules and updates the first fractional number.
    void add(Fraction f){
        
        if(this->denominator!=f.denominator){
            
            this->numerator = (this->numerator * f.denominator) + (f.numerator * this->denominator);
            this->denominator *= f.denominator;
        }
        else{
            this->numerator+=f.numerator;
        }
    }
  
    // multiplies the two fraction and updates the first fractional number
    void multiply(Fraction f){
        this->numerator *= f.numerator;
        this->denominator *= f.denominator;
    }
  
    // simplifies the fractional value. Use inbuilt __gcd() function.
    void simplify(){
        int cdivisor = __gcd(this->numerator,this->denominator);
        this->numerator /= cdivisor;
        this->denominator /= cdivisor;
    }
    
    void print(){
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }

};

int main() {

    
    int numerator, denominator,nq,query;
    
    cin>>numerator>>denominator;
  
    Fraction f1(numerator, denominator);
  
    cin>>nq;
    
    for(int i=0;i<nq;i++){
        cin>>query>>numerator>>denominator;
      
        Fraction f2(numerator, denominator);
      
        if(query==1)
//             if f1 = 1/4 and f2 = 3/5
//             f1.add(f2); results in: 
//             f1 = 17/20 and f2 = 3/5
            f1.add(f2);
        else if(query==2)
//             if f1 = 1/4 and f2 = 3/5
//             f1.multiply(f2); results in: 
//             f1 = 3/20 and f2 = 3/5
            f1.multiply(f2);
//         if f1=5/20, which can be further simplified as 1/4 so this 
//         simplify will perform this.
        f1.simplify();
        f1.print();        
    }
    return 0;
}
