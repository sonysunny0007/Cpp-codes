//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Device{
private:
	string deviceName;
public:
	//constructor
	Device(const string& name){ //& is used to avoid string copies
		deviceName=name;
		cout <<"Constructor:Device " <<deviceName<<"Initalized"<<endl;
	}

	//Destructor
	~Device(){
		cout << "Destructor: Device " << deviceName << " cleaned up." << endl;
	}

	//member function
	void operate(){
		cout << "Operating " << deviceName << "..." << endl;
	}

};

int main() {
	{
		Device sensor("Temperature Sensor");// Constructor is called here
		sensor.operate();
	}// Destructor is called here as the object goes out of scope

	cout << "Main function continues..." << endl;
	return 0;
}
