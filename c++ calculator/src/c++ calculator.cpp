//============================================================================
// Name        : c++.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : class and switch
//============================================================================

#include <iostream>
using namespace std;
int option;

class calculator
{
public:
	int num1,num2;
	int sum,option;
};


int main() {

	calculator cal;
	cout<<"Enter two numbers"<<endl;
	cin>>cal.num1>>cal.num2;
	cout<<"Enter the operation required //1-Addition,2-Substraction,3-Division"<<endl;
	cin>>option;
	switch (option)
	{
	case 1:
		cal.sum=cal.num1+cal.num2;
		cout<<"Addition of given two numbers is: "<<cal.sum<<endl;
		break;
	case 2:
		cal.sum=cal.num1-cal.num2;
		cout<<"Substraction of given two numbers is: "<<cal.sum<<endl;
		break;
	case 3:
		cal.sum=cal.num1/cal.num2;
		cout<<"Division of given two numbers is: "<<cal.sum<<endl;
		break;

	default:
		cout<<"Invalid operation"<<endl;
	}
	return 0;
}
