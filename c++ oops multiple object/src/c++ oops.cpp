//============================================================================
// Name        : c++.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : oops multiple objects
//============================================================================

#include <iostream>
using namespace std;

class player					//class name is student
{
	public:
	string name;				//name and rollnumbers are the variables inside the class student
	int rollnumber;
	string hand;
};

int main() {

	player p17;   				//obj is the object made using class student
	p17.name="Sony";
	p17.rollnumber=17;
	p17.hand="Right hand";

	player p10;   				//obj is the object made using class student
	p10.name="Tiya";
	p10.rollnumber=10;
	p10.hand="Right hand";

	cout<<p17.name<<" "<<p17.rollnumber<< " "<< p17.hand<<endl;
	cout<<p10.name<<" "<<p10.rollnumber<< " "<< p10.hand<<endl;
	return 0;
}
