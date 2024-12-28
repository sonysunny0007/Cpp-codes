//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Animal{
public:
	void speak(){
		cout <<"I am an animal"<<endl;
	}
};

class Dog :public Animal{
public:
	void bark(){
		cout <<"The dog is barking" <<endl;
	}
};

int main() {
	Dog myDog;
	myDog.speak();
	myDog.bark();
	return 0;
}
