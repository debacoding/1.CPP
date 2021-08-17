#include <iostream>
using namespace std;
int main(){
   
   int *p; // Pointer declaration
   int var=101;
 
   
   p = &var; // p stores address of var

   cout<<"Address of var: "<<&var<<endl;
   cout<<"Address of var: "<<p<<endl;
   cout<<"Address of p: "<<&p<<endl;
   cout<<"Value of var: "<<*p;
  
  //Pointer declaration
   int *x;
   //Array declaration
   int arr[]={1, 2, 3, 4, 5, 6};
   //Assignment
   x = arr;
   for(int i=0; i<6;i++){
     cout<<*x<<endl;
     //++ moves the pointer to next int position
     x++;
   }
  
    int my_var=10;
    int *my_p=&my_var;

    cout<<endl<<endl;
    cout<<"my_var : "<<my_var<<endl; //Integer value
    cout<<"my_p : "<<my_p<<endl; //Address
    cout<<"*my_p : "<<*my_p<<endl; //Integer value from pointed variable (my_var)
    cout<<"&my_p : "<<&my_p<<endl; //Address of pointer itself

    int **pp=&my_p; //Pointer pointing to address of another pointer
    cout<<"pp : "<<pp<<endl;
    cout<<"&pp : "<<&pp<<endl;
    cout<<"*pp : "<<*pp<<endl;
    cout<<"**pp : "<<**pp<<endl;
  
    int a[3]={10,20,30};
    short int zm;
    int * const p = &a[0];

    cout<<p<<endl; //Pointer p stores the base address of the array
    cout<<a<<endl; //Base address - a[0]

    cout<<endl<<endl;

    cout<<&a[0]<<endl; //Prints address of a[0] (Base address of the array)
    cout<<&a[1]<<endl;
    cout<<&a[2]<<endl;

    cout<<endl<<endl;

    cout<<a<<endl;
    cout<<a+1<<endl; //Moves by one position of the size of the type of array element
    cout<<a+2<<endl;

    cout<<endl<<endl;

    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    cout<<*(a+2)<<endl;


   return 0;
}

// all 3 are same
// ++*p;   
// ++(*p); 
// ++*(p); 

/*
Output:

Address of var: 0x7fff5dfffc0c
Address of var: 0x7fff5dfffc0c
Address of p: 0x7fff5dfffc10
Value of var: 101
1
2
3
4
5
6
my_var : 10
my_p : 0x7ffede94d294
*my_p : 10
&my_p : 0x7ffede94d298
pp : 0x7ffede94d298
&pp : 0x7ffede94d2a0
*pp : 0x7ffede94d294
**pp : 10
0x7fff6472051c
0x7fff6472051c


0x7fff6472051c
0x7fff64720520
0x7fff64720524


0x7fff6472051c
0x7fff64720520
0x7fff64720524


10
20
30


*/
