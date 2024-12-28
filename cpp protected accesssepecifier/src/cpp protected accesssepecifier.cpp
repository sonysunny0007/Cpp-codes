//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Protected access specifier example
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Testingteam{
public:
	int salary;
protected:
	string name;
public:
	Testingteam(int salary, string name){
		this->salary=salary;
		this->name=name;
	}

	void getDetails(){
		cout<<"Tester name: "<<name<<endl;
		cout<<"Tester Salary: "<<salary<<endl;
	}
};



int main() {

	Testingteam tester(110000,"Sony");
	tester.getDetails();

	tester.salary=120000;
	tester.getDetails();
	//cout<<"Hey"<<endl;
	return 0;
}
