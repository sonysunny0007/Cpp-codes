//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Inheritance example
//============================================================================

#include <iostream>
using namespace std;

class Car{
public:
	int car_seat;
	void drive(){
		cout<<"Driving...."<<endl;
	}
};

class ElectricCar : public Car{
public:
		int battery;
		void showBattery(int battery){
			this->battery=battery;
			cout<<"The battery percentage is :"<<battery<<"%"<<endl;
		}
		~ElectricCar(){
			cout<<"ElectricCar memmory cleared...."<<endl;
		}


};




int main() {
	ElectricCar tesla;
	tesla.drive();
	tesla.showBattery(50);
	return 0;
}
