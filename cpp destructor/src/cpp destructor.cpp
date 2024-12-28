//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Destructor example
//============================================================================

#include <iostream>
using namespace std;

class demo{
public:
	demo(){
		cout<<"This is constuctor"<<endl;
	}
	~demo(){
		cout<<"This is destructor"<<endl;
	}
};


int main() {
	demo demo_;
	return 0;
}
