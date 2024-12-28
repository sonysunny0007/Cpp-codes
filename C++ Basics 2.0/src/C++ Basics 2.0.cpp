//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int addition(int num1, int num2){

	return num1+num2;
}


int main() {
	int num1, num2;
	cout << "Enter the first number";
	cin >>num1;

	cout << "Enter the second number";
	cin >>num2;

	int result = addition(num1,num2);
	cout << "The addition result is:"<< result << endl; // prints !!!Hello World!!!
	return 0;
}
