#include<iostream>
using namespace std;

// In class A, func multiplies the value passed as a parameter by 2:
class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

// In class B, func multiplies the value passed as a parameter by 3:
class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

// In class C, func multiplies the value passed as a parameter by 5:
class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

/*
You need to modify the class D and implement the function update_val which sets D's val to new_val by manipulating the value by only calling the func defined in classes A, B and C.
It is guaranteed that new_val has only  and  as its prime factors.
*/
class D : public A, public B, public C 
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
             while(new_val%2 == 0) {
                A::func(val);
                new_val /= 2;
            }
            while(new_val%3 == 0) {
                B::func(val);
                new_val /= 3;
            }
            while(new_val%5 == 0) {
                C::func(val);
                new_val /= 5;
            }

			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};



void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}


int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);

}

/*
Sample Input

new_val = 30

Sample Output

A's func will be called once.
B's func will be called once.
C's func will be called once.

Explanation

Initially, val = 1 .

A's func is called once:

val = val*2  
val = 2
B's func is called once:

val = val*3
val = 6
C's func is called once:

val = val*5
val = 30
