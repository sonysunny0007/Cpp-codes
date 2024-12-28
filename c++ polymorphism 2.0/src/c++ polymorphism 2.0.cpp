//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Polymorphism is a feature of Object-Oriented Programming (OOP) that allows
//objects of different classes to be treated as objects of a common base class.
//============================================================================

#include <iostream>
using namespace std;

//Base class
class Shape{
public:
	//virtual function to enable polymorphism
	virtual void draw()const{
		cout << "Drawing a shape" <<endl;
	}
};

//Derived class 1
class Circle : public Shape{
	//Overridden draw() function
	void draw()const override{
		cout << "Drawing a circle" <<endl;
	}
};

//derived class 2
class Rectangle : public Shape{
	//overridden draw() function
	void draw() const override{
		cout << "Drawing a rectangle" <<endl;
	}
};


int main() {
	Shape* shapePtr;

	Circle circleObj;
	shapePtr = &circleObj;
	shapePtr->draw();


	Rectangle rectObj;
	shapePtr = &rectObj;
	shapePtr->draw();

	return 0;
}
