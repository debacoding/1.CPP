#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int D;
    cin >> D; // total dist. from house to office
    
    long long int onlineCost,classicCost;
    
    int a1,b1,c1;   
    cin>>a1>>b1>>c1;
    int a2,b2,c2,d2;   
    cin>>a2>>b2>>c2>>d2;

// a1 is online taxi cost for b1 km and c1 is online cost for every remaining km
    onlineCost = a1 + (D-b1) * c1;

// speed of classic taxi is a2 km/min 
    // base fare for classic taxi is b2, cost for every min is c2 and d2 is cost for each km

    classicCost = b2 + ((D/a2) * c2) + (D * d2);
    if(onlineCost <= classicCost)
    cout<<"Online Taxi";
    else
    cout<<"Classic Taxi";

    return 0;
}
