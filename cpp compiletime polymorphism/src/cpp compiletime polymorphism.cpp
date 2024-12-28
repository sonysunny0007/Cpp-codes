//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : cpp compiletime polymorphism example
//============================================================================

#include <iostream>
using namespace std;

class Calculator{
public:
	int findSum(int a, int b){
		return a+b;
	}

	int findSum(int a, int b, int c){
		return a+b+c;
	}
};





int main() {

	Calculator addition;
	cout<<addition.findSum(10, 20)<<endl;
	cout<<addition.findSum(20,30,40)<<endl;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
