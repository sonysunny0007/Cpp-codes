//============================================================================
// Name        : learninhetence.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Parent{
public:
	string info;
	void modemInfo(string info){
		cout<<"modem info: "<<info<<endl;
	};
};

class Child: public Parent{
public:
	int id;
	string info;
	Child(int id, string info){
		this->id=id;
		this->info=info;
		cout<<"modem id is: "<<id<<endl;
	}

	void modemIDInfo(){
		Parent::modemInfo(info);
	}

};


int main() {

	Child child(17,"VC1234");
	child.modemIDInfo();
	return 0;
}
