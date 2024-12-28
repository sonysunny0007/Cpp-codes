//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Run time polimorphism example
//============================================================================

#include <iostream>
using namespace std;

class A{
public:

	void show(){
		cout<<"I am from the parent class"<<endl;
	}

};

class B : public A{
public:

	void show(){
		cout<<"I am from the derived class"<<endl;
	}
};


int main() {

	A obj;
	obj.show();

	B object;
	object.show();
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
