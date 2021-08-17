#include<bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
    int length,breadth;
   
    public:
    void setRectangle(int a,int b){
        length=a;
        breadth=b;
        return;
    }
   void getArea(){ 
       cout<<(length*breadth);
       return;
   }
};

int main(){
    
    Rectangle area;
    int l,b;

    cin>>l>>b;

    area.setRectangle(l,b);
    area.getArea();

    return 0;
}
