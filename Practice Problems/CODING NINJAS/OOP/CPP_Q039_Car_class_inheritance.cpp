/*
Design a class Car having parameterized constructor that takes two arguments as an input i.e noOfGear and color and a printCarInfo method that prints the CarInfo i.e noOfGear and color.
Design another class RaceCar having parameterized constructor has an additional attribute maxSpeed and printRaceCarInfo method that prints the RaceCarInfo i.e noOfGear, color and maxSpeed.
Note: You have to create an object of class RaceCar and call the printRaceCarInfo method.
*/

#include <bits/stdc++.h>
using namespace std;

class Car {
    int noOfGear;
    string color;
    public:
    	Car(int noOfGear, string color){
            this->noOfGear = noOfGear;
            this->color = color;
        }
    	
    	void printCarInfo(){
            cout<<"noOfGear: "<<this->noOfGear<<endl;
            cout<<"color: "<<this->color<<endl;
        }
};

// inheritance
class RaceCar: public Car {
    int maxSpeed;
    public:
    	RaceCar(int noOfGear,string color, int maxSpeed):Car(noOfGear, color){
            this->maxSpeed= maxSpeed;
        }
    
    	void printInfo(){
            printCarInfo();
            cout<<"maxSpeed: "<<this->maxSpeed<<endl;
        }
};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}
