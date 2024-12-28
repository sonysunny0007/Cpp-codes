//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class rectangle {
public:
	int length, width;

	int area(){
		return length*width;
	}
};

int main() {
	rectangle rect;
	rect.length=10;
	rect.width=20;
	cout <<"Area of rectangle1 is: "<<rect.area()<<endl;

	rectangle rect2;
	rect2.length=200;
	rect2.width=100;
	cout <<"Area of rectangle2 is: "<<rect2.area()<<endl;
	return 0;
}
