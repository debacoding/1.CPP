#include <iostream>
#include<bits/stdc++.h> // for setprecision()
#include<string> // for getline()
using namespace std;

int main() {
	int i; // 4 bytes
	cin>>i;
	cout<<"Value of i:"<<i<<" "<<"Address of i:"<<&i<<endl;
	
	short s; // 2 bytes
	cin>>s;
	cout<<"Value of s:"<<s<<" "<<"Address of s:"<<&s<<endl;
	
	float f ; // 4 bytes
	cin>>f;
	cout<<"Value of f:"<<fixed<<setprecision(3)<<f<<" "<<"Address of f:"<<&f<<endl;
	
	double d; // 8 bytes
	cin>>d;
	cout<<"Value of d:"<<fixed<<setprecision(2)<<d<<" "<<"Address of d:"<<&d<<endl;
	
	char c;
	cin>>c;
	cout<<"Value of c:"<<c<<" "<<"Address of c:"<<&c<<endl;
	
	string str;
	getline(cin>>ws,str); // to extract all white space
	cout<<"Value of str:"<<str<<" "<<"Address of str:"<<&str<<endl;
	
	bool b;
	cin>>b;
	cout<<"Value of b:"<<b<<" "<<"Address of b:"<<&b<<endl;
	
	unsigned short int u=60445; // positive or unsigned numbers
	cout<<"Value of u:"<<u<<" "<<"Address of u:"<<&u<<endl;
	
	
	return 0;
}

/*
Input:
4
20
20.0059
20.003
A
Hello World
true

Output:
Value of i:4 Address of i:0x7fff881debd0
Value of s:20 Address of s:0x7fff881debcc
Value of f:20.006 Address of f:0x7fff881debd4
Value of d:20.00 Address of d:0x7fff881debd8
Value of c:A Address of c:A
Value of str:Hello World Address of str:0x7fff881debe0
Value of b:0 Address of b:0x7fff881debca
Value of u:60445 Address of u:0x7fff881debce
